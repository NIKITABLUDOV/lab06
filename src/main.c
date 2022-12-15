#include <stdio.h>

int main()
{
    int ARR[5][5], RES[5][5], b, i, j, f;

    //вводим ранг матрици
    scanf("%d", &b);
    

    //введим матрицу
    for (i = 0; i < b; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &ARR[i][j]);
        }
    }

    //умножаем матрицу саму на себя
    for (i = 0; i < b; i++) {
        for (j = 0; j < b; j++) {
         
            RES[i][j] = 0;
            
            for (f = 0; f < b; f++) {
            
                RES[i][j] += ARR[i][f] * ARR[f][j];
            }
        }
    }

    //выводим результат умножения
    for (i = 0; i < b; i++) {
        for (j = 0; j < b; j++) {
            printf("%d\t", RES[i][j]);
        }
        printf("\n");
    }

    return 0;
}
