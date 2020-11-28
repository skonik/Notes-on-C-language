#include <stdio.h>
#include <stdlib.h>

typedef struct Vector2D {
    int x;
    int y;
} Vector;


Vector* create_vector2d(x, y) {
    Vector *new_vector = malloc(sizeof(struct Vector2D));
    new_vector->x = x;
    new_vector->y = y;

    return new_vector;

}


Vector* add(Vector vector_1, Vector vector_2) {
    Vector* new_vector = create_vector2d(0, 0);
    new_vector->x = vector_1.x  + vector_2.x;
    new_vector->y = vector_1.y  + vector_2.y;

    return new_vector;
}




int main() {
    Vector *v1 = create_vector2d(2, 2);
    Vector *v2 = create_vector2d(1, 2);

    printf("Vector1: x: %d, y: %d\n", v1->x, v1->y);
    printf("Vector2: x: %d, y: %d\n", v2->x, v2->y);


    Vector *v3 = add(*v1, *v2);
    printf("New vector: x: %d, y: %d\n", v3->x, v3->y);

    return 0;
}