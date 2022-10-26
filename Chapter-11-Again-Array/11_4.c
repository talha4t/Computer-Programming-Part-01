#include <stdio.h>
#include <string.h>

int main() {
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan",
        "Sri lanka", "Nepal", "Bhutan", "Maldives"};
        int i, j, name_length;
        
        for(i = 0; i < 7; i++) {
            name_length = strlen(saarc[i]);

            for(j = 0; j < name_length; j++) {
                printf("%c ", saarc[i][j]);
            }
        }
        return 0;
}