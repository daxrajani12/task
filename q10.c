// Write a C program to find sub_st/substring from a given string. 
// If substring is available print "Search successful" otherwise print "Search Unsuccessful"

#include <stdio.h>
#include <string.h>

int search(char *string, char *sub_st) {
    int i, j;
    int str_len = strlen(string);
    int key_len = strlen(sub_st);

    for (i = 0; i < str_len - key_len + 1; i++) {
        for (j = 0; j < key_len; j++) {
            if (string[i + j] != sub_st[j]) {
                break;
            }
        }
        if (j == key_len) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char string[] = "Hello, World!";
    char sub_st[] = "Worldd";
    int result = search(string, sub_st);
    if (result == 1) {
        printf("Search successful\n");
    } else {
        printf("Search unsuccessful\n");
    }
    return 0;
}
