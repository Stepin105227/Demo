//Reverse an array whiout using other array:
#include <iostream>
using namespace std;
int updated_size = 0;
void Reverse_Array(int *arr,int arr_len);
void Max_Min_elements(int *arr,int arr_len,int *max, int *min);
void Remove_duplicates(int *arr,int arr_len);

void Remove_duplicates(int *arr,int arr_len)
{
    for(int i=0;i<arr_len-1;i++)
    {
        if(arr[i] != arr[i+1])
        {
            arr[updated_size] = arr[i];
            updated_size++;
        }
    }
    arr[updated_size++] = arr[arr_len-1];
}

void Max_Min_elements(int *arr,int arr_len,int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for(int i =1;i<arr_len;i++)
    {
        if(*max < arr[i])
        {
           *max = arr[i];
        }
        if(*min > arr[i])
        {
            *min = arr[i];
        }
    }
}
void Reverse_Array(int *arr,int arr_len)
{
    int last_index = arr_len - 1;
    int start_index=0, temp = 0;
    while(start_index < last_index)
    {
       temp = arr[start_index];
       arr[start_index] = arr[last_index];
       arr[last_index] = temp;
       start_index++;
       last_index--;
    }
}
int main() {
    int array_data[10] = {11,11,22,33,33,44,55,55,100,100};
    int max_value =0;
    int min_value =0;
    Max_Min_elements(array_data,10, &max_value, &min_value);
    cout<<"max :"<<max_value<<" min :"<<min_value<<"\n";
    Reverse_Array(array_data,10);
    cout<<"Reversed Array :\n";
    for(int i =0;i<10;i++)
    {
        cout<<array_data[i] <<" ";
    }
    cout<<"\nAfter Removing duplicate element\n";
    Remove_duplicates(array_data, 10);
    for(int i =0;i<updated_size;i++)
    {
        cout<<array_data[i] <<" ";
    }
    return 0;
}
