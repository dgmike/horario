#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "template.h"

char *template_file(char *filename) {
    char* new_filename = "";
    const char* path = "./template/";
    const char* ext  = ".t";

    new_filename = malloc( strlen(filename) + strlen(path) + strlen(ext) + 4 );
    strcpy(new_filename, path);
    strcat(new_filename, filename);
    strcat(new_filename, ext);
    return new_filename;
}

int template_load(char *filename) {
    int data;
    FILE *file;

    file = fopen(template_file(filename), "r");
    if (file == 0) {
        printf("Nao consegui abrir o arquivo");
    }
    while ((data = fgetc(file)) != EOF) {
        printf("%c", data);
    }
    fclose(file);
    return 1;
}
