// Write a C program that expands given short norm to expanded string. 
// e.g., if passed string is "a-g" output should be "abcdefg" if passed string is "b-h4-8" output should be "bcdefgh45678" 
// if passed string is "-c-e-" output should be "cde

#include <stdio.h>
#include <string.h>

void expand(char* start_st, char* expanded) {
    int i, j, start, end;
    for (i = 0, j = 0; i < strlen(start_st); i++) {
        if(start_st[i] == '-' && i ==0){
            continue;
        }
        if(start_st[i] == '-' && i == strlen(start_st)-1){
            break;
        }
        if (start_st[i] == '-') {
            start = start_st[i-1] + 1;
            end = start_st[i+1];
            for (; start <= end; start++) {
                expanded[j++] = start;
            }
            i++;
        } else {
            expanded[j++] = start_st[i];
        }
    }
    expanded[j] = '\0';
}

int main() {
    char start_st[] = "-A-F1-6a-g-";
    char expanded[100];
    expand(start_st, expanded);
    printf("%s\n", expanded);
    return 0;
}

