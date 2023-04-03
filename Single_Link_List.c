

#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* Head = NULL; 
struct node* Create_Node()
{
    struct node* temp_node;
    temp_node = (struct node*)malloc(sizeof(struct node));
    return (temp_node);
}
//Node insertation at last
void Insert_Node(int inserted_data)
{
    struct node* temp, *traverse_node;
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
void Delete_Node()
{
    struct node* removed_node;
    removed_node = Head;
    if(Head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        Head = Head->next;
        free(removed_node);
    }

}
void Display_List()
{
    struct node* traverse_node;
    if(Head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        traverse_node = Head;
        while(traverse_node != NULL)
        {
            printf("%d  ",traverse_node->data);
            traverse_node = traverse_node->next;
        }
    }

}
int main()
{
    printf("\n inside main\n");
    for(int i=1;i<6;i++)
    {
        Insert_Node(i+10);
    }
    Delete_Node();
    Display_List();
    
    return 0;
}
