// Write a C program to find sub_st/substring from a given string. 
// If substring is available print "Search successful" otherwise print "Search Unsuccessful"

/**
    * @file q10.c
    * @author Dax
    * @brief Write a C program to find sub_st/substring from a given string. If substring is available print "Search successful" otherwise print "Search Unsuccessful"
*/

#include <stdio.h>
#include <string.h>

/**
    * @brief get two strings one is main string and another is sub string and compares them
    * @param str_len length of main string
    * @param key_len length of string which it finds from the main string
    * @return 1 if it finds the sub-string in the main string
    * @return 0 if it does not find the sub-string in the main string
*/

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

/**
    * @brief passes two strings to search() function and when it gets the result prints the output accordingly
    * @param string main string
    * @param sub_st sub string
    * @result it stores the value returned by the search() function
*/

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
