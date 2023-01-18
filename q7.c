//Write a C program to find string length without using library function (strlen).

#include<stdio.h>

void main(){
    char st[] = "Hello, Good morning!";
    int len = 0;
    for(int i=0;st[i]!='\0';i++){
        len++;
    }
    printf("length is %d\n",len);
}