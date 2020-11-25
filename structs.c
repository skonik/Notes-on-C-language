#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
}; 

struct Node *HEAD = NULL;
struct Node *TAIL = NULL;


struct Node* create_node(int value) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    
    new_node->value = value;
    new_node->next = NULL;

    if (HEAD == NULL) {
        HEAD = new_node;
        TAIL = HEAD;
    } else {
        
        TAIL->next = new_node;
        TAIL = new_node;
    }

    return new_node;
}

int main() {

    struct Node *node_1 = create_node(1);
    struct Node *node_2 = create_node(2);
    struct Node *node_3 = create_node(3);
    struct Node *node_4 = create_node(4);
    struct Node *node_5 = create_node(5);



    struct Node *current_node = HEAD;
    while (current_node != NULL) {
        printf("Value: %d\n", current_node->value);
        current_node = current_node->next;
    }

    return 0;
};