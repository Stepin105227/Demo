#include <stdio.h>
int matrix1[3][3] = {{1,2,3},{1,6,3},{1,2,3}};
int matrix2[3][3] = {{1,2,1},{1,1,3},{8,1,5}};
int result[3][3] = {0};
int main() {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum =0;
            for(int k =0;k<3;k++)
            {
               sum += matrix1[i][k]*matrix2[k][j];
            }
            result[i][j] = sum;
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
