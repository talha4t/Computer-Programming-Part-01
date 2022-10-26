#include<stdio.h>
int main(){
    float items[2];
    printf("enter three items cost:\n");
    scanf("%f",&items[0]);  
    scanf("%f",&items[1]); 
    scanf("%f",&items[2]);
    printf("total price 1: %0.2f\n",items[0]+(18*items[0]));
    printf("total price 2: %0.2f\n",items[1]+(18*items[1]));
    printf("total price 3: %0.2f\n",items[2]+(18*items[2]));
    return 0;
}