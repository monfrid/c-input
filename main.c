#include <stdio.h>
#include <stdlib.h>

#define max(A, B) ((A) > (B) ? (A) : (B))


struct node_s {
    int value;
    struct node_s* next;
};

typedef struct node_s node;

void printlist(node *head) {
    node *temp = head; 

    while(temp != NULL) {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node *list(int value) {
    node *result = malloc(sizeof(node));
    result->value = value;
    result->next = NULL;
    return result;
}

int main()
{
    node *tmp;
    node *head = NULL;

    for (int i = 0; i < 25; i++) {
        tmp = list(i);
        tmp->next = head;
        head = tmp;
    }
    
    printlist(head);

    return 0;
}

