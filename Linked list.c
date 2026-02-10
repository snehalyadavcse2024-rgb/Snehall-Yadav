#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function prototypes
void createList(int n);
void insertAtBeginning(int data);
void insertAtEnd(int data);
void insertAtPosition(int data, int position);
void deleteByValue(int value);
void deleteByPosition(int position);
void displayList();

// Create a linked list with n nodes
void createList(int n) {
    int data;
    struct Node *newNode, *temp;

    if (n <= 0) return;

    head = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data for node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;

    temp = head;

    for (int i = 2; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

// Insert at beginning
void insertAtBeginning(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(int data) {
    struct Node *newNode, *temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Insert at given position (1-based index)
void insertAtPosition(int data, int position) {
    struct Node *newNode, *temp = head;

    if (position == 1) {
        insertAtBeginning(data);
        return;
    }

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete by value
void deleteByValue(int value) {
    struct Node *temp = head, *prev = NULL;

    while (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Delete by position (1-based index)
void deleteByPosition(int position) {
    struct Node *temp = head, *prev = NULL;

    if (position == 1) {
        if (head == NULL) return;
        head = head->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Display linked list
void displayList() {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function with menu
int main() {
    int choice, n, data, pos, value;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Create List\n");
        printf("2. Insert Node at Beginning\n");
        printf("3. Insert Node at End\n");
        printf("4. Insert Node at Position\n");
        printf("5. Delete Node by Value\n");
        printf("6. Delete Node by Position\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of nodes: ");
                scanf("%d", &n);
                createList(n);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;

            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;

            case 4:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertAtPosition(data, pos);
                break;

            case 5:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteByValue(value);
                break;

            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deleteByPosition(pos);
                break;

            case 7:
                displayList();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

