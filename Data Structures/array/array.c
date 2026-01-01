#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void init(Array *arr, int capacity) {
    (*arr).data = (int*)malloc(capacity * sizeof(int));
    (*arr).size = 0;
    (*arr).capacity = capacity;
}

void resize(Array *arr) {
    (*arr).capacity *= 2;
    (*arr).data = (int*)realloc((*arr).data, (*arr).capacity * sizeof(int)); 
    printf("Array resized to %d capacity\n", (*arr).capacity);
}

void add(Array *arr, int value) {
    if((*arr).size == (*arr).capacity)
        resize(arr);

    (*arr).data[(*arr).size++] = value;
    printf("Value %d added.\n", value);
}

int update(Array *arr, int index, int value) {
    if(index < 0 || index >= (*arr).size)
        return 0;
    
    (*arr).data[index] = value;
    return 1;
}

int delete(Array *arr, int index) {
    if(index < 0 || index >= (*arr).size)
        return 0;
    
    for(int i = index; i < (*arr).size -1; i++) {
        (*arr).data[i] = (*arr).data[i+1];
    }

    (*arr).size--;
    return 1;
}

int search(Array *arr, int value) {
    for(int i = 0; i < (*arr).size; i++) {
        if ((*arr).data[i] == value)
            return i;
    }

    return -1;
}

void display(Array *arr) {
    if((*arr).size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("\nArray: ");
    for(int i = 0; i < (*arr).size; i++)
        printf("|%d| ", (*arr).data[i]);
    printf("\n");
}

void freeArray(Array *arr) {
    free((*arr).data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}