
#include "Single_Link_List.h"
#include<iostream>
using namespace std;

Single_Link_List::Single_Link_List( )
{
    Head = NULL;
}
//Node creation
struct node* Single_Link_List::Create_Node()
{
    struct node* temp_node;
    temp_node = (struct node*)malloc(sizeof(struct node));
    return (temp_node);
}
//Node insertation at last
void Single_Link_List::Insert_Node(int inserted_data)
{
    struct node* temp, traverse_node;
    temp = Create_Node();
    temp->data = inserted_data;
    temp->next = NULL;
    if(Head == NULL)
    {
        Head = temp;
    }
    else
    {
        traverse_node = Head;
        while(traverse_node->next != NULL)
        {
            traverse_node = traverse_node->next;
        }
        traverse_node->next = temp;

    }
}
//Delete First node
void Single_Link_List::Delete_Node()
{
    struct node* removed_node;
    removed_node = Head;
    if(Head == NULL)
    {
        cout<<"\n List is empty\n";
    }
    else
    {
        Head = Head->next;
        free(removed_node);
    }

}
voidSingle_Link_List:: Display_List()
{
    struct node* traverse_node;
    if(Head == NULL)
    {
        cout<<"\nList is empty\n";
    }
    else
    {
        traverse_node = Head;
        cout<<"\nList is :\n";
        while(traverse_node != NULL)
        {
            cout<<traverse_node->data<<" ";
            traverse_node = traverse_node->next;
        }
    }

}

