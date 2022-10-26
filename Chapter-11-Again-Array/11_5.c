#include <stdio.h>
#include <string.h>

int main() {
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan",
        "Sri lanka", "Nepal", "Bhutan", "Maldives"};

        int i, j, string_length;

        for(i = 0; i < 7; i++) {
            string_length = strlen(saarc[i]);
            
            for(j = 0; j < string_length; j++) {
                printf("(%d, %d) = %c\n", i, j, saarc[i][j]);
            }
        } 
        return 0;
}