#include <stdio.h>

void merge_arrays(int* a1, int size1, int* a2, int size2, int* a3) {
    int i, j, k;

    i = j = k = 0;

    while (i < size1 && j < size2) {
        if (a1[i] <= a2[j]) {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }
//
//    while (i < size1) {
//        a3[k++] = a1[i++];
//    }

    while (j < size2) {
        a3[k++] = a2[j++];
    }
}

void display_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int a1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(a1) / sizeof(a1[0]);

    int a2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(a2) / sizeof(a2[0]);

    int a3[size1 + size2];

    merge_arrays(a1, size1, a2, size2, a3);

    printf("Contents of array a1: ");
    display_array(a1, size1);

    printf("Contents of array a2: ");
    display_array(a2, size2);

    printf("Contents of array a3 (merged): ");
    display_array(a3, size1 + size2);

    return 0;
}
