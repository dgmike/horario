#include <stdio.h>
#include "template.c"

int main (int argc, char **argv)
{
    printf("Content-type: text/html\n\n");

    template_load("index");

    return 1;
}
