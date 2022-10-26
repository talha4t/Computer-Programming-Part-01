#include <stdio.h>

int main() {
    int n = 5,i, j;

   for(i = 0; i < 9; i++) {
       for(j = 0; j < 5; j++) {
              if(j >= i) {
                  printf("*");
              }
              else {
                  printf(" ");
              }
           }
           if(i > 5) {
               for(j = 0; j < 5; j++) {
                   if(i + j >= 5) {
                       printf("*");
                   }
                   else {
                       printf(" ");
                   }
               }
           }
       printf("\n");
       }
    return 0;
}