#include <stdio.h>

struct  Color {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};

int main() {
    FILE *file_pointer;
    file_pointer = fopen("./test.ppm", "w+");

    fprintf(file_pointer, "P3\n");
    fprintf(file_pointer, "100 100\n");
    fprintf(file_pointer, "255\n");

    struct Color main_color;
    main_color.red = 255;
    main_color.green = 160;
    main_color.blue = 0;


    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            char color_string[80];
            sprintf(color_string, "%d %d %d\n", main_color.red, main_color.green, main_color.blue);
            fprintf(file_pointer, "%s", color_string);
        }
    }

    fclose(file_pointer);
}