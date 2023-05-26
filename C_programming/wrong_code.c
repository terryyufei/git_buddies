#include <stdio.h>

int main()
{
    int arr[3][5][2];
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2; k++) {
                arr[i][j][k] = count;
                count++;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Single element of 3D array: %d\n", arr[2][1][2]);

    return 0;
}
