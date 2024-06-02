#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[9][9];
    int i, j;
    int x, y;
    int max = 0;

    srand(time(NULL));

    for (i=1; i<9; i++) {
        for (j=1; j<9; j++){
            array[i][j] = rand() % 100;
            printf("%d ", array[i][j]);
        }
        printf("\n");
        
    }
    for (i=1; i<9; i++) {
        for (j=1; j<9; j++){  
            if (array[i][j] > max) {
                max = array[i][j];
                x = i;
                y = j;
            }
        }
    }  
    printf("max:%d, x:%d, y:%d",max,x,y);
    return 0;
  
}