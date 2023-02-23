// Write a C function to invert the bits in given integer variable. 
// The inversion of bits should start from given position and should be done upto given counts.

/**
    * @file q4.c
    * @brief Write a C function to invert the bits in given integer variable. The inversion of bits should start from given position and should be done upto given counts.

*/

#include<stdio.h>

/**
    * @brief this takes input as int and invert its bit from defined starting position and for defined counts and prints its integer value accordingle
    * @param num is the user entered integer 
    * @param s is a starting position from which bit inverstion will take place
    * @param c is a count of bit to get inverted
    * @param mask it creates mask for XOR operation and have 1s form stating position and for given count
    * @param a output value is stored in this after the XOR opertaion of given integer and created mask
*/

void main(){
    int num,s,c;
    printf("enter number : ");
    scanf("%d",&num);
    printf("enter starting point : ");
    scanf("%d",&s);
    printf("enter count : ");
    scanf("%d",&c);

    int mask = ~(~0 << c) << s;
    int a = num ^ mask;
    printf("%d",a);
}