/* Compute the product of an array except self. 
(e.g.: I/P: [1,2,3,4], O/P: [24,12,8,6])  */
#include <stdio.h>

int main() {
    int arr[4] = {2,5,3,4};
    int updated_arr[4];
    for(int i=0;i<4;i++)
    {
        int sum =1;
        for(int j=0;j<4;j++)
        {
            sum =  sum * arr[j];
        }
        updated_arr[i] = sum/arr[i];
    }
    for(int k=0;k<4;k++)
    {
        printf("%d ",updated_arr[k]);
    }
    return 0;
}
