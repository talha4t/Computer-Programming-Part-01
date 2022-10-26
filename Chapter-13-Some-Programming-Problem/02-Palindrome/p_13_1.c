#include <stdio.h>
#include <string.h>

int main() {
    char word[80];
    int i, j, len, is_palindrome = 0;

    scanf("%s", word);

    len = strlen(word);
    // madam

    for(i = 0, j = len - 1; i < len; i++, j--) {
        if(word[i] != word[j]) {
            is_palindrome = 1;
            printf("%s is not a palindrome.\n", word);
            break;
        }     
    }

    if(is_palindrome == 0) {
        printf("%s is a palindrome.\n", word);
    }

    return 0;

}