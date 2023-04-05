
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
void push(struct array_stack* f_stack,int f_data);
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

void push(struct array_stack* a_stack, int a_data)
{
    if(!is_full(a_stack))
    {
        a_stack->top++;
        a_stack->array[a_stack->top] = a_data;
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
        a_stack->top--;
        return popped_value;
    }
    else
    {
        std::cout << "Sorry Bro Stack is Empty\n";
    }
}
int main() {
    int capacity = 4;
    int poppedvalue;
    
    struct array_stack* stack;
    stack = stack_initialization(capacity);
    std::cout << "Hello world!\n";
    pop(stack);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    poppedvalue = pop(stack);
    std::cout << "Popped_Value is : "<< poppedvalue<<"\n";
    return 0;
}
