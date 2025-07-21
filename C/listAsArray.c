#include <stdio.h>
void newArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void display(int arr[], int size) {
    printf("The elements in array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
}

int linearSearch(int arr[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (val == arr[i]) {
            return i;
        }
    }
    return -1;
}

void insertElement(int arr[], int *n, int pos, int val) {
    int t = *n;
    while (t > pos) {
        arr[t] = arr[t - 1];
        t--;
    }
    arr[pos] = val;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    while (pos < *n - 1) {
        arr[pos] = arr[pos + 1];
        pos++;
    }
    (*n)--;
}

void copy(int src[], int dest[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

void sortArray() {
    printf("Sorting function is not implemented yet.\n");
}

void isSorted() {
    printf("IsSorted function is not implemented yet.\n");
}

void mergeSortedArrays() {
    printf("MergeSortedArrays function is not implemented yet.\n");
}

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr1[40], arr2[40], size, choice, val, pos;
    int *n = &size;

    printf("Enter number of elements to be added in array: ");
    scanf("%d", n);
    newArray(arr1, size);

    do {
        printf("\n\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Linear Search\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Copy Array\n");
        printf("6. Sort Array\n");
        printf("7. Check if Sorted\n");
        printf("8. Merge Sorted Arrays\n");
        printf("9. Reverse Array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(arr1, *n);
                break;
            case 2:
                printf("Enter value to be searched: ");
                scanf("%d", &val);
                pos = linearSearch(arr1, *n, val);
                if (pos == -1)
                    printf("Element not found.\n");
                else
                    printf("Element found at index %d.\n", pos);
                break;
            case 3:
                printf("Enter position and value to insert (1-based): ");
                scanf("%d %d", &pos, &val);
                pos--;
                if (pos >= 0 && pos <= *n)
                    insertElement(arr1, n, pos, val);
                else
                    printf("Invalid position.\n");
                break;
            case 4:
                printf("Enter position to delete (1-based): ");
                scanf("%d", &pos);
                pos--;
                if (pos >= 0 && pos < *n)
                    deleteElement(arr1, n, pos);
                else
                    printf("Invalid position.\n");
                break;
            case 5:
                copy(arr1, arr2, *n);
                printf("Copied array:\n");
                display(arr2, *n);
                break;
            case 6:
                sortArray();
                break;
            case 7:
                isSorted();
                break;
            case 8:
                mergeSortedArrays();
                break;
            case 9:
                reverseArray(arr1, *n);
                printf("Array reversed.\n");
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
