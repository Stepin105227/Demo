
#include <iostream>
using namespace std;
int main() {
    int data_1,data_2,result;
    cout<<"\nEnter two no :\n";
    cin>>data_1>>data_2;
    try
    {
        if(data_2 == 0)
            throw 0;
        result = data_1/data_2;
    }
    catch(int e)
    {
        cout<<"\n Exception occure due to division by:"<<e;
    }
    cout<<"\nResult :"<<result;
    return 0;
}
