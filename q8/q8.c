// Write a C program to compare two strings (returns 0 on success and -1 on failure) Define above function in another c file instead of main source file. 
// Make a Makefile to compile these c files.

/**
    * @file q8.c 
    * @brief Write a C program to compare two strings (returns 0 on success and -1 on failure) Define above function in another c file instead of main source file. Make a Makefile to compile these c files.
*/

#include <stdio.h>
#include<string.h>
#include "string_compare.c"

/**
    * @brief this compates two strings and gives output
    * @return it returns 0 if both strings are same else it will return -1
*/

int string_compare(char* str1, char* str2);

/**
    * @brief this takes two strings as and input and passes them to the function and then when function returns values it prints results accordingly
    * @param str1 it is one of the two strings which will be compared
    * @param str2 it is one of the two strings which will be compared
*/

int main() {
    char str1[1024];
    char str2[1024];
    printf("Enter string 1: ");
    fgets(str1,1024,stdin);
    printf("Enter string 2: ");
    fgets(str2,1024,stdin);
    int result = string_compare(str1, str2);
    if (result == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
    return 0;
}
