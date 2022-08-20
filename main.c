#include <stdio.h>
#include <stdlib.h>

struct node_s {
    int value;
    struct node_s* next;
};

typedef struct node_s node_t;

void printlist(node_t *head) {
    node_t *temp = head; 

    while(temp != NULL) {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node_t *node(int value) {
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

int main()
{
    node_t *tmp;
    node_t *head = NULL;

    for (int i = 0; i < 25; i++) {
        tmp = node(i);
        tmp->next = head;
        head = tmp;
    }
    
    printlist(head);

    return 0;
}

