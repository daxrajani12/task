//Write a C program to find string length without using library function (strlen).

/**
    * @file q7.c
    * @brief Write a C program to find string length without using library function (strlen).
*/

#include<stdio.h>

/**
    * @brief finds the length of string and prints it
    * @param st string of which value we want to find
    * @param len stores the length of the string
*/

void main(){
    char st[] = "Hello, Good morning!";
    int len = 0;
    for(int i=0;st[i]!='\0';i++){
        len++;
    }
    printf("length is %d\n",len);
}