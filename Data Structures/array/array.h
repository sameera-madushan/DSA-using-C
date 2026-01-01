#ifndef ARRAY_H
#define ARRAY_H

typedef struct {
    int *data;
    int size;
    int capacity;
} Array;

void init(Array *arr, int capacity);
void resize(Array *arr);
void add(Array *arr, int value);
int update(Array *arr, int index, int value);
int delete(Array *arr, int index);
int search(Array *arr, int value);
void display(Array *arr);
void freeArray(Array *arr);

#endif