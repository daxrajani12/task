//Write a C program to find 1's count in binary value of given integer number.

/**
    *@file q2.c
    *@brief Write a C program to find 1's count in binary value of given integer number.
*/

#include <stdio.h>

/**
    * @brief this takes integer as an input and prints number of 1s in the binary representation tha number
    * @param n in this number is stored 
    * @param count number of 1s is stored in this 
*/

int main() {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n) {
        count += n & 1;
        n >>= 1;
    }

    printf("Number of 1's in binary representation : %d", count);
    return 0;
}
