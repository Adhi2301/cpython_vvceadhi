#include <stdio.h>
#include <stdlib.h>

int main() {
    int oxygen[3][3]; 
    int i, j;
    int sum[3] = {0};  
    int avg[3]; 
    int maxAvg = 0;
    int isValid = 1;  

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &oxygen[i][j]) != 1) {
                printf("INVALID INPUT\n");
                return 0;
            }
            if (oxygen[i][j] < 1 || oxygen[i][j] > 100) {
                printf("INVALID INPUT\n");
                return 0;
            }
            sum[i] += oxygen[i][j];  
        }
    }

    for (i = 0; i < 3; i++) {
        avg[i] = (sum[i] + 1) / 3;  
        if (avg[i] > maxAvg) {
            maxAvg = avg[i];  
        }
    }

    if (maxAvg < 70) {
        printf("All trainees are unfit.\n");
        return 0;
    }

    for (i = 0; i < 3; i++) {
        if (avg[i] == maxAvg) {
            printf("Trainee Number : %d\n", i + 1);
        }
    }

    return 0;
}