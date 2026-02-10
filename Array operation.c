#include <stdio.h>
#define MAX 100
int main() 
{
    int arr[MAX], n = 0, choice, elem, pos, key, i;

    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\n----- Menu -----\n");
        printf("1. Traverse and display elements\n");
        printf("2. Search for an element (Linear Search)\n");
        printf("3. Insert an element at any position\n");
        printf("4. Delete an element from any position\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
        case 1:
            traverse(arr, n);
            break;
        case 2:
            printf("Enter element to search: ");
            scanf("%d", &key);
            search(arr, n, key);
            break;
        case 3:
            printf("Enter element to insert: ");
            scanf("%d", &elem);
            printf("Enter position (1 to %d): ", n + 1);
            scanf("%d", &pos);
            n = insert(arr, n, pos, elem);
            break;
        case 4:
            printf("Enter position to delete (1 to %d): ", n);
            scanf("%d", &pos);
            n = delete(arr, n, pos);
            break;
        case 5:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

