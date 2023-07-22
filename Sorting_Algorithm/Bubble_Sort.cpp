#include <iostream>
using namespace std;
int* Bubble_Sort(int *array, int length, int flag);
enum
{
    ASCENDING_ORDER,
    DESENDING_ORDER 
};
int main() {
    int array_data[] = {99,88,66,77,55,11,33,22};
    int array_length = sizeof(array_data)/sizeof(array_data[0]);
    int *array_dataxyz = Bubble_Sort(array_data, array_length,ASCENDING_ORDER);
    for(int i =0; i<array_length; i++)
    {
        cout<<array_data[i]<<" ";
    }
    return 0;
}

int* Bubble_Sort(int *array, int length,int flag)
{
    for(int round =1; round <= length-1; round++) 
    {
        for(int index =0;index <= length-1-round; index++)
        {
            int temp;
            if(flag == ASCENDING_ORDER)
            {
                if(array[index] > array[index +1] )
                {
                    temp = array[index];
                    array[index] = array[index+1];
                    array[index+1] = temp;
                }                
            }
            else
            {
                if(array[index] < array[index +1] )
                {
                     temp = array[index];
                    array[index] = array[index+1];
                    array[index+1] = temp;                   
                }
            }
        }
    }
    return array;
    
}
