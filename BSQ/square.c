#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main() 
{
    int fd = open("file", O_RDONLY);
    if (fd == -1) {
        write(2, "Could not open file\n", 20);
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;
    while ((bytesRead = read(fd, buffer, BUFFER_SIZE - 1)) > 0) 
    {
        buffer[bytesRead] = '\0';
        write(1, buffer, bytesRead);
    }

    if (bytesRead == -1) 
    {
        write(2, "Error reading file\n", 18);
        exit(1);
    }

    close(fd);
    return 0;
}
