
#include <stdio.h>

void array_reverse(int *array, int array_size);
void right_shift_array(int *array, int array_size, int shift);
void lift_shift_array(int *array, int array_size, int shift);
void array_print(int *array);

int main() {
    int array[5] = {1,2,20,12,5};
    int array_size = sizeof(array)/sizeof(array[0]);
    
    array_print(array);
    right_shift_array(array, array_size, 1);
    lift_shift_array(array, array_size, 1);
    array_reverse(array, array_size);
    array_print(array);
    return 0;
}

void lift_shift_array(int *array, int array_size, int shift)
{
    for(int i =0;i<shift; i++)
    {
        int temp = array[0];
        for(int j=0;j<array_size-1;j++)
        {
            array[j] = array[j+1];
        }
        array[array_size-1] = temp; 
    }
    array_print(array);
}

void right_shift_array(int *array, int array_size, int shift)
{
    if(shift % array_size == 0 ){}
    else{
    for(int k=0;k<shift;k++)
    {
        int temp = array[array_size-1];
        for(int i =array_size-1;i>0;i--)
        {
           array[i] = array[i-1];
        }
        array[0] = temp;
    }
    }
    array_print(array);
}

void array_reverse(int *array, int array_size)
{
    int swap_count = array_size/2;
    int last = array_size-1;
    for(int i=0;i<swap_count; i++)
    {
        int temp =0;
        temp = array[i];
        array[i] = array[last];
        array[last] = temp;
        last--;
    }
}

void array_print(int *array)
{
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
}
