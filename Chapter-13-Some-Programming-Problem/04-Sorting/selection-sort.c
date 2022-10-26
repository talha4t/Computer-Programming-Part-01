#include <stdio.h>

int main()
{
    int i, j, temp;
    int array[] = {5, 2, 4, 1, 3};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (array[i] > array[j]) 
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}