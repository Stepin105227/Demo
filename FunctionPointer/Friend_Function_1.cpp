/*
1. Friend function is not a member function of a class.
2. you can decleare friend function anywhere (private / public) because it's not a member function.
3. friend function must be deffine outside of the class and class specifier (::) is not required for that.
4. friend function can access any memberof class but not direclly.
5. It has no caller object.
6. one friend function can decleare more than one class.
friend function can become friend to more than one class
*/
#include <iostream>
using namespace std;
class B;
class A
{
    private:
        int x;
    public:
        void set_data(int a) { x = a;}
        friend void fun(A, B);
};

class B
{
    private:
        int y;
    public:
        void set_data(int b) { y = b;}
        friend void fun(A, B);
};

void fun(A obj_a, B obj_b)
{
    cout<<"Sum is : "<<obj_a.x + obj_b.y<<"\n";
}
int main() {
    A object_a;
    B object_b;
    object_a.set_data(10);
    object_b.set_data(20);
    fun(object_a, object_b);
    return 0;
}
