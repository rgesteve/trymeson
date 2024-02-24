#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>

int main(int argc, char* argv[])
{
    if (-1 == fork()) {
        exit("fork failed!\n");
    }
    printf("Hello, world!\n");
    //return EXIT_SUCCESS;
    exit(EXIT_SUCCESS);
}