#include <stdio.h>

int string_compare(char* str1, char* str2) {
    int i=0;
    int flag = 0;
    while (str1[i]!='\0' || str2[i]!='\0') {
        if (str1[i]!= str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag==0){
        return 0;
    }
    else{
        return 1;
    }
    
}
