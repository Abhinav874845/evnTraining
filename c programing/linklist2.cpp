#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* head = NULL;

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(!newnode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertend(int data) {
    struct node* newnode = createnode(data);
    if(head == NULL) {
        head = newnode;
        return;
    }
    struct node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
}

void display() {
    struct node* temp = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Linked list: ");
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deletebeginning() {
    if(head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    struct node* temp = head;
    head = head->next;
    printf("Deleted %d from beginning\n", temp->data);
    free(temp);
}

void deleteend() {
    if(head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    if(head->next == NULL) { // only one node
        printf("Deleted %d from end\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct node* temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;
    printf("Deleted %d from end\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void deleteposition(int pos) {
    if(head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    if(pos == 1) {
        deletebeginning();
        return;
    }
    struct node* temp = head;
    for(int i = 1; temp != NULL && i < pos-1; i++) {
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL) {
        printf("Invalid position\n");
        return;
    }
    struct node* delnode = temp->next;
    temp->next = delnode->next;
    printf("Deleted %d from position %d\n", delnode->data, pos);
    free(delnode);
}

int main() {
    int choice, data, pos;
    while(1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert at end\n");
        printf("2. Display list\n");
        printf("3. Delete from beginning\n");
        printf("4. Delete from end\n");
        printf("5. Delete from position\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertend(data);
                break;
            case 2:
                display();
                break;
            case 3:
                deletebeginning();
                break;
            case 4:
                deleteend();
                break;
            case 5:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteposition(pos);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

