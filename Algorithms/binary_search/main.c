#include <stdio.h>
#include "binary_search.h"

int main() {
    int arr[] = {5, 7, 10, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int index = binary_search(arr, size, key);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
