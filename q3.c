//Write a C program to reverse the given number in most efficient way.
#include <stdio.h>


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = 0;
    int digit = 0;
    while(num != 0){
        digit = num % 10;
        reversed = reversed *10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d", reversed);
    return 0;
}