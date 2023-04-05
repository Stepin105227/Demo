
#include <iostream>
struct array_stack
{
    int top;
    int capacity;
    int *array;
};

struct array_stack* stack_initialization( int f_capacity);
bool is_full(struct array_stack* f_stack);
bool is_empty(struct array_stack* f_stack);
void push(struct array_stack* f_stack,int f_data, int f_capacity);
int pop(struct array_stack* f_stack);

struct array_stack* stack_initialization( int a_capacity)
{
    struct array_stack* stack;
    stack = (array_stack*)malloc(sizeof(array_stack));
    stack->top = -1;
    stack->capacity = a_capacity;
    stack->array = (int*)malloc(sizeof(int) * a_capacity);
    return stack;
}

bool is_full(struct array_stack* a_stack)
{
    if( a_stack->top == a_stack->capacity -1)
    return true;
    else
    return false;
}

bool is_empty(struct array_stack* a_stack)
{
    if( a_stack->top == -1)
    return true;
    else
    return false;
}

void push(struct array_stack* a_stack, int a_data, int a_capacity)
{
    if(!is_full(a_stack))
    {
        a_stack->top++;
        a_stack->array[a_stack->top] = a_data;
        std::cout << a_stack->array[a_stack->top];
        if( a_stack->top < a_capacity-1 )
        {
            std::cout <<", ";
        }
    }
    else
    {
        std::cout << "Sorry Bro Stack is Full\n";
    }
}

int pop(struct array_stack* a_stack)
{
    int popped_value;
    if(!is_empty(a_stack))
    {
        popped_value = a_stack->array[a_stack->top];
        a_stack->array[a_stack->top] = NULL;
        a_stack->top--;
        return popped_value;
    }
    else
    {
        std::cout << "Sorry Bro Stack is Empty\n";
    }
}
int main() {
    int capacity =4;
    int poppedvalue;
    
    struct array_stack* stack;
    stack = stack_initialization(capacity);
    pop(stack);
    std::cout << "\nPushed Value : [ ";
    push(stack, 100, capacity);
    push(stack, 200, capacity);
    push(stack, 300, capacity);
    push(stack, 400, capacity);
    std::cout << " ]";
    std::cout << "\nLast value Before Pop: "<< stack->array[3];
    poppedvalue = pop(stack);
    std::cout << "\nPopped_Value is : "<< poppedvalue;
    std::cout << "\nLast value After Pop: "<< stack->array[3]<<"\n";
    return 0;
}
