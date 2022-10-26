#include<stdio.h>
int main(){

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int item = 100;
    
    int left, right, middle;
        left = 0;
        right = 9;
    
    while (left <= right)
    {
        middle = (right + left)/2;
        if (arr[middle] == item)
        {
            printf("your item is %d indexed\n", middle);
            return 0;
        }
        else if (arr[middle] < item)
        {
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    printf(" Item not found ");
    return 0;
}