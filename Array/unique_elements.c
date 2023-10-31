// An array to store unique elements
#include <stdio.h>

int main() 
{
    int array[] = {1, 2, 1, 3, 2,7,3};
    int len = sizeof(array) / sizeof(array[0]);
    int unique[10];
    int k=0;
    for(int i=0; i<len; i++)
    {
        int flag =1;
        for(int j=0;j<i;j++)
        {
            if(array[i] == array[j])
            {
                flag =0;
                break;
            }
            else
            {
                flag =1;
            }
        }
        if(flag == 1)
        {
            unique[k] = array[i];
            k++;
        }
    }
    
    for(int p=0;p<k; p++)
    {
        printf("%d ",unique[p]);
    }
    return 0;
}
