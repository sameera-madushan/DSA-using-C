#include <stdio.h>
#include "linear_search.h"

int main() {
    int arr[] = {5, 10, 40, 20, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int index = linearSearch(arr, size, key);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
