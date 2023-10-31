#include <stdio.h>

int sum_array(int arr[], int index) {
    if (index == 0) {
        return arr[0];
    } else {
        return arr[index] + sum_array(arr, index - 1);
    }
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5};
    for(int i=0;i<5;i++){
        printf("%d\t",my_array[i]);
    }
    printf("\n");
    int array_size = sizeof(my_array) / sizeof(my_array[0]);
    int total_sum = sum_array(my_array, array_size - 1);
    printf("The sum of the array elements is: %d\n", total_sum);
    return 0;
}
