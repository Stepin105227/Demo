
#ifndef SINGLE_LINK_LIST_H
#define SINGLE_LINK_LIST_H
#include<stdio.h>
#include<iostream>
using namespace std;

class Single_Link_List
{
    public:
    struct node
    {
        int data;
        struct node* next;
    };
    
    Single_Link_List();
    ~Single_Link_List(void)
    {}
    struct node* Create_Node();
    void Insert_Node(int data_h);
    void Delete_Node();
    void Display_List();
    struct node* Head;

};

#endif
