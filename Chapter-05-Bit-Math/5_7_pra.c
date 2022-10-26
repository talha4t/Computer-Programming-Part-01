#include<stdio.h>
int main(){
      double cel,faren;
      printf("enter the farenheit:");
      scanf("%lf",&faren);
      cel = (faren-32)/1.8;
      printf("your cel is:%.2lf\n",cel);
      return 0;
}