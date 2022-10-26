#include <stdio.h>

int string_length(char str[]);

int main()
{
    char country[100];

    int length;

    while(1 == scanf("%s", country)) {
        length = string_length(country);
        printf("length: %d\n", length);
    }

    return 0;
}

int string_length(char str[]) 
{
    int i, length = 0;

    i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;

}