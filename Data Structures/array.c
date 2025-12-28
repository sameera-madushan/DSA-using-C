// Array Data Structure Implementation

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int array[MAX_SIZE];
int n = 0;

void add(int value) {
  if (n < MAX_SIZE) {
    array[n] = value;
    n++;
    printf("Value %d added to the array.\n", value);
  } else {
    printf("Array is full. Cannot add more values.\n");
  }
}

void update(int index, int value) {
  if (index >= 0 && index < n) {
    array[index] = value;
    printf("Value at index %d updated to %d.\n", index, value);
  } else {
    printf("Invalid index. Cannot update value.\n");
  }
}

void delete(int index) {
  if (index >= 0 && index < n) {
    for (int i = index; i < n - 1; i++) {
      array[i] = array[i + 1];
    }
    n--;
    printf("Value at index %d deleted.\n", index);
  } else {
    printf("Invalid index. Cannot delete value.\n");
  }
}

void search(int value) {
  for (int i = 0; i < n; i++) {
    if (array[i] == value) {
      printf("Value %d found at index %d.\n", value, i);
      return;
    }
  }

  printf("Value %d not found in the array.\n", value);
}

void display() {
  if (n == 0) {
    printf("Array is empty.\n");
    return;
  }

  printf("\nArray: ");
  for (int i = 0; i < n; i++) {
    printf("|%d| ", array[i]);
  }
  printf("\n");
}

int main() {
    int decision, value, index;

    while (1) {
        printf("\n--- Array Operations ---\n");
        printf("1. Add\n");
        printf("2. Update\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your decision: ");
        scanf("%d", &decision);

        switch (decision) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &value);
                add(value);
                display();
                break;

            case 2:
                printf("Enter index to update: ");
                scanf("%d", &index);
                printf("Enter new value: ");
                scanf("%d", &value);
                update(index, value);
                display();
                break;

            case 3:
                printf("Enter index to delete: ");
                scanf("%d", &index);
                delete(index);
                display();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(value);
                break;

            case 6:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid option! Try again.\n");
        }
    }

    return 0;
}