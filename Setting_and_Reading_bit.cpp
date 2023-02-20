#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int num, position, updatedNum, bitStatus,xyz;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Enter nth bit to check and set (0-31): ";
    cin>>position;
    bitStatus = (num >> position) & 1;
    cout<<"The "<<position<<" bit is set to "<<bitStatus<<"\n";
    updatedNum = (1<<position) |num;
    cout<<"Updated no after setting bit "<<updatedNum<<"\n";
    return 0;
}
