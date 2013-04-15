#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "template.h"

char *template_file(char *filename) {
    char* final_filename = "";
    
    final_filename = malloc( strlen(filename) + 13 + 1 );

    strcpy(final_filename, "./template/");
    strcat(final_filename, filename);
    strcat(final_filename, ".t");

    return final_filename;
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
