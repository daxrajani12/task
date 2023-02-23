// Write a C program that returns index of first matched element from given array. if element is not found it returns -1. 
// e.g., if array[] = {1, 2, 5, 9, 11} and search value entered is "5" than it returns 2. If search value entered is "7" which is not present inside array, so function returns -1.

/**
    * @file q5.c
    * @brief Write a C program that returns index of first matched element from given array. if element is not found it returns -1. e.g., if array[] = {1, 2, 5, 9, 11} and search value entered is "5" than it returns 2. If search value entered is "7" which is not present inside array, so function returns -1.
*/

#include <stdio.h>

/**
    * @brief it returns index of the first matched element from the array
    * @param size is a size of array on whcich it will perform searching
    * @param arr is array of user defined size
    * @param searchValue is an position of value which we want to find from the array
    * @note if number does not exist in the array, it will print -1. otherwise it will print its index value in the array
*/

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int searchValue;
    printf("enter value to search : ");
    scanf("%d",&searchValue);
    int flag = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            printf("%d",i);
            flag = 1;
        }
    }
    if (flag==0){
    printf("-1");
    }


    return 0;
}
