#include <iostream>
using namespace std;
int min_loc(int *arraydata, int iteration,int length);

int main() {
    int arraydata[10] = {8,1,3,2,5,4,6,9,7,10};
    int length = sizeof(arraydata)/sizeof(arraydata[0]);
    for(int index =0; index<length; index++ )
    {
        cout<<arraydata[index]<<" ";
    }

    for(int iteration =0; iteration < length-1; iteration++)
    {
        int temp, min;
        min = min_loc(arraydata, iteration,length);
        temp = arraydata[iteration];
        arraydata[iteration] =  arraydata[min];
        arraydata[min] = temp;
    }
    cout<<"\n";
    for(int index =0; index<length; index++ )
    {
        cout<<arraydata[index]<<" ";
    }
    return 0;
}
int min_loc(int *arraydata, int iteration,int length)
{
    int ret = iteration;
    int min_data = arraydata[iteration];
    for(int i = iteration+1; i<length; i++)
    {
        if(min_data > arraydata[i])
        {
            min_data = arraydata[i];
            ret = i;
        }
    }
    return ret;
}
