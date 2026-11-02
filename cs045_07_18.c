#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

void insertTerm(struct Node** head, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    
    if (*head == NULL || exp > (*head)->exp) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL && temp->next->exp > exp) {
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
}

void displayPolynomial(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->exp);
        temp = temp->next;
        if (temp != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Node* poly = NULL;

    insertTerm(&poly, 5, 4);
    insertTerm(&poly, 3, 2);
    insertTerm(&poly, 7, 0);

    printf("Polynomial: ");
    displayPolynomial(poly);

    return 0;
}
