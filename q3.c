//Write a C program to reverse the given number in most efficient way.
/**
    * @file q3.c 
    * @brief Write a C program to reverse the given number in most efficient way.
*/

#include <stdio.h>

/**
    * @brief it will take integer as and input and revers it in the most efficient manner and prints the output
    * @param num in this entered value is stored too reverse
    * @param reversed in this one by one last digit of the number is stored to reverse
    * @param digit stores first digit of the number and pass that to the reversed 

*/

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