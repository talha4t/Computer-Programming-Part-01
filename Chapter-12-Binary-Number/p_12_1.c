#include <stdio.h>

void rem(int n);

int main() {

}

void rem(int n) {
    int i;
    int rem, ara[10];
    while(n) {
        rem = n % 2;
        n = n / 2;
        ara[i] = rem;
        i++;
    }
}
