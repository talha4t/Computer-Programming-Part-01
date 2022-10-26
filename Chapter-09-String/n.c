#include <stdio.h>

int main() {
    char full_name[100];
    fgets(full_name, 100, stdin);
    printf("%s", full_name);
    return 0;
}