#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main() {

    Array arr;
    init(&arr, 5);

    add(&arr, 10);
    add(&arr, 20);
    add(&arr, 30);
    display(&arr);

    update(&arr, 1, 25);
    display(&arr);

    delete(&arr, 0);
    display(&arr);

    int idx = search(&arr, 30);
    if (idx != -1) printf("Value 30 found at index %d.\n", idx);
    else printf("Value 30 not found.\n");

    freeArray(&arr);
    return 0;
}