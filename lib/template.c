#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "config.c"
#include "template.h"

char *template_file(char *filename) {
    char* final_filename = "";
    
    final_filename = malloc( strlen(filename) + TEMPLATE_CONSTANTS_LENGTH + 1 );

    strcpy(final_filename, TEMPLATE_PATH);
    strcat(final_filename, filename);
    strcat(final_filename, TEMPLATE_EXT);

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
