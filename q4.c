// Write a C function to invert the bits in given integer variable. 
// The inversion of bits should start from given position and should be done upto given counts.

#include<stdio.h>

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