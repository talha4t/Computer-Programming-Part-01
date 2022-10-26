#include <stdio.h>

int string_compare(char a[], char b[]);

int main()
{
    
    return 0;
}

int string_compare(char a[], char b[]) 
{
    int i, j;

    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if (a[i] < b[i]) {
            return -1;
        }
        if(a[i] > b[i]) {
            return 1;
        }
    }

    if()
}