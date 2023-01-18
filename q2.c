//Write a C program to find 1's count in binary value of given integer number.
#include <stdio.h>

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
