#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int size;
    int row;
    int col;
} Square;

void read_map(const char *filename, char ***map, int *rows, int *cols, char *empty, char *obstacle, char *full) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fscanf(file, "%d%c%c%c\n", rows, empty, obstacle, full);

    *map = malloc(*rows * sizeof(char *));
    char buffer[1024];
    for (int i = 0; i < *rows; i++) {
        fgets(buffer, sizeof(buffer), file);
        *cols = strlen(buffer) - 1;
        (*map)[i] = malloc((*cols + 1) * sizeof(char));
        strncpy((*map)[i], buffer, *cols);
        (*map)[i][*cols] = '\0';
    }

    fclose(file);
}

Square find_largest_square(char **map, int rows, int cols, char empty, char obstacle) {
    int **dp = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        dp[i] = malloc(cols * sizeof(int));
    }

    Square max_square = {0, 0, 0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (map[i][j] == obstacle) {
                dp[i][j] = 0;
            } else {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = fmin(dp[i - 1][j], fmin(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                }
                if (dp[i][j] > max_square.size) {
                    max_square.size = dp[i][j];
                    max_square.row = i;
                    max_square.col = j;
                }
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        free(dp[i]);
    }
    free(dp);

    return max_square;
}

void update_map(char **map, Square max_square, char full) {
    for (int i = max_square.row; i > max_square.row - max_square.size; i--) {
        for (int j = max_square.col; j > max_square.col - max_square.size; j--) {
            map[i][j] = full;
        }
    }
}

void print_map(char **map, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        printf("%s\n", map[i]);
    }
}

void free_map(char **map, int rows) {
    for (int i = 0; i < rows; i++) {
        free(map[i]);
    }
    free(map);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <map_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char **map;
    int rows, cols;
    char empty, obstacle, full;
    
    read_map(argv[1], &map, &rows, &cols, &empty, &obstacle, &full);

    Square max_square = find_largest_square(map, rows, cols, empty, obstacle);
    update_map(map, max_square, full);
    
    print_map(map, rows, cols);
    
    free_map(map, rows);

    return EXIT_SUCCESS;
}
