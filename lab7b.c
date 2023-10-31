#include <stdio.h>
//int main(){
//    int arr1[]={1,2,3,4,5};
//    int* ptrarr1 = &arr1;
//
//    printf("arr1 is:\t");
//    for(int i =0;i<5;i++)
//    {
//        printf("%d\t",*ptrarr1+i);
//    }
//    printf("\n");
//    printf("arr2 is:\t");
//    int arr2[5];
//    int* ptrarr2 = &arr2;
//    for (int j=0;j<5;j++){
//        *(ptrarr2+j)=*(ptrarr1+j);
//        printf("%d\t",*ptrarr2+j);
//
//    }
//
//}
void copy_array(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

void show_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int a1[] = {1, 2, 3, 4, 6};
    int a2[5]; // Make sure a2 has enough space to hold all elements from a1

    int size = sizeof(a1) / sizeof(a1[0]);

    // Copy elements from a1 to a2
    copy_array(a1, a2, size);

    printf("Contents of array a1: ");
    show_array(a1, size);

    printf("Contents of array a2: ");
    show_array(a2, size);

    return 0;
}
