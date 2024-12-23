#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>

#include "trymeson-config.h"

#include "foo.h"

int main(int argc, char* argv[])
{
    if (-1 == fork()) {
        exit("fork failed!\n");
    }
    printf("Hello, world!\n");
    printf("Version from config is: " TRYMESON_VCS_TAG ".\n");

    int c = foo(3,4);
    printf("The result from foo: %d.\n", c);

    //return EXIT_SUCCESS;
    exit(EXIT_SUCCESS);
}