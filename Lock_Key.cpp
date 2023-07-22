#include <iostream>
using namespace std;

int main() {
    int lock_value[5] = {10,20,30,40,50};
    int x_key_value[5] = {1,2,3,4,5};
    int y_key_value[5] = {11,12,8,7,16};
    
    for(int lock_index = 0; lock_index<5; lock_index++)
    {
        for(int x_key_index =0 ; x_key_index < 5; x_key_index++ )
        {
            for(int y_key_index =0 ; y_key_index < 5; y_key_index++ )
            {
                if(x_key_value[x_key_index] * y_key_value[y_key_index]  == lock_value[lock_index])
                {
                    cout<<"\nfound : "<<lock_value[lock_index]<<" with x :"<<x_key_value[x_key_index]<<" and y :"<<y_key_value[y_key_index];
                }
            }
        }
    }

    return 0;
}
