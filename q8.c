// Write a C program to compare two strings (returns 0 on success and -1 on failure) Define above function in another c file instead of main source file. 
// Make a Makefile to compile these c files.

#include <stdio.h>
#include "string_compare.c"

int string_compare(char* str1, char* str2);

int main() {
    char str1[] = "Dax";
    char str2[] = "Dax rajani";
    int result = string_compare(str1, str2);
    if (result == 0) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
    return 0;
}
