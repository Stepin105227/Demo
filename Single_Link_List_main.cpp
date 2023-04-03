
#include "Single_Link_List.h"
#include<iostream>
using namespace std;

Single_Link_List* list_ptr = nullptr;
int main()
{
    cout<<"\n****Inside Main Function****\n";
    list_ptr = new Single_Link_List();
    for(int i=1;i<6;i++)
    {
        list_ptr->Insert_Node(i);
    }
    list_ptr->Delete_Node();
    list_ptr->Display_List();
    return 0;

}