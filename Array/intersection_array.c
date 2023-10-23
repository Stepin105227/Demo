/* Determine the intersection of two integer arrays.
(e.g.: I/P: [1,2,4,5,6], [2,3,5,7], O/P: [2,5])   */
#include <stdio.h>
#include <stdlib.h>
int *intersection_array(int *arr1, int *arr2, int *q)
{
    int k=0;
    int arr3[4] ={0};
    int *arr4;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    *q = k;
    arr4 = (int*)malloc(k* sizeof(int));
    arr4 = arr3;
    return arr4;
}
int main() {
    int arr_1[] = {1,2,7,5,6,4};
    int arr_2[] = {2,3,5,7};
    int *ptr;
    int q =0;
    ptr = intersection_array(arr_1, arr_2,&q);
    for(int i=0;i<q;i++)
    {
       printf("%d ",ptr[i]);
    }
    
    return 0;
}
