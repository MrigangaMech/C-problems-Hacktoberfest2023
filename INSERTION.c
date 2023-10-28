#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element into an array at a specified index
void insertElement(int array[], int *size, int element, int index) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (index < 0 || index > *size) {
        printf("Invalid index. Element cannot be inserted.\n");
        return;
    }

    for (int i = *size; i > index; i--) {
        array[i] = array[i - 1];
    }

    array[index] = element;
    (*size)++;
}

int main() {
    int array[MAX_SIZE];
    int size = 0;

    int n, element, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Array size exceeds the maximum limit.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        size++;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &index);

    insertElement(array, &size, element, index);

    printf("Updated array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
