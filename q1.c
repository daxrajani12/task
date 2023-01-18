// Write a C program that displays given number in string format. 
// e.g., 10 -> ten 100 -> hundred 5270 -> five thousand two hundred seventy

#include<stdio.h>
int main(){
    char *number[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *nty[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    char *tens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

    int n;
    printf("enter number: ");
    scanf("%d",&n);

    if(n>99999){
        printf("Can not solve");
    }
    else{
        int arr[100];
        int i = 0;
        while(n>0){
            arr[i]=n%10;
            i+=1;
            n=n/10;
        }
       // chat msg[];
        if (arr[4]!=0){
            if(arr[4]==1){
                printf("%s",tens[arr[3]]);
                printf(" thousand ");
            }
            else{
                printf("%s",nty[arr[4]]);
                printf("%s",number[arr[3]]);
                printf(" thousand ");
            }
        }
        else{
            if(arr[3]!=0){
                printf("%s",number[arr[3]]);
                printf(" thousand ");
            }
        }
        if(arr[2]!=0){
            printf("%s",number[arr[2]]);
            printf(" hundred ");
        }
        if(arr[1]!=0){
            if(arr[1]==1){
                printf("%s",tens[arr[0]]);
            }
            else{
                printf("%s",nty[arr[1]]);
                printf("%s",number[arr[0]]);
            }
        }
        else{
            if(arr[0]!=0){
                printf(" %s",number[arr[0]]);
            }
        }

    }
}