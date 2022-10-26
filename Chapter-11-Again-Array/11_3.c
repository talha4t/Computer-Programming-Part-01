#include <stdio.h>

int main() {
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan",
        "Sri lanka", "Nepal", "Bhutan", "Maldives"};
        int i;
        for(i = 0; i < 7; i++) {
            printf("%s\n", saarc[i]);
        }
        return 0;
}