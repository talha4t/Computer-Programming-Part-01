#include <stdio.h>

int main() {

    int grid[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j] = 1;
        }
    }

    int n;
    printf("Please enter the number of blocked cells: ");
    scanf("%d", &n);

    printf("Now enter the cells: ");

    int x, y;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }

    char c;
    while(1) {
        if (grid[x][y] == 1) {
            if (c == 'U')
                x = x - 1;
            else if (c == 'D')
                x = x + 1;
            else if (c == 'L')
                y = y - 1;
            else if (c == 'R')
                y = y + 1;
        }
        else if (c == 'S')
            break;
    }

    printf("Final position of the robot is: %d, %d\n", x, y);
    
    return 0;
}