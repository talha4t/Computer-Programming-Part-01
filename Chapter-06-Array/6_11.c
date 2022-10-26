#include <stdio.h>

int main() {
     int ft_marks[40]={78,76,88,76,76,98,54,76,56,86,
                     56,67,45,54,74,43,32,65,76,67,
                     54,42,76,42,21,21,23,43,54,42,
                     31,43,53,53,62,12,63,62,63,66,},
        st_marks[40]={84,21,96,54,64,73,85,53,12,34,
                     54,34,34,53,65,54,23,74,74,34,
                     94,54,34,45,63,23,74,85,52,82,
                     23,67,88,84,42,84,84,23,32,73},
    final_marks[40]= {98,76,95,45,58,95,74,43,85,86,
                     68,85,98,45,99,74,34,63,73,34,
                     43,45,84,84,32,68,47,84,74,73,
                     63,74,84,84,73,25,34,78,73,73};
    int i;
    double total_marks[40];

    for (i = 0; i < 40; i++) {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for (i = 1; i <= 40; i++) {
        printf("Roll no: %d\t Total Marks: %0.0lf\n", i, total_marks[i - 1]);
    }

    return 0;
}