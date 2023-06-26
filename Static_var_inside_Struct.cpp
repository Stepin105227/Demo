//static variable inside structure (but this is not possible in c)
#include <iostream>
using namespace std;

struct MyStruct {
public:
    static int st_Var;
};

int MyStruct::st_Var = 10;  

int main() {
    cout <<"\nStatic Variable: " << MyStruct::st_Var;
    MyStruct::st_Var = 20;
    cout <<"\nModified Static Variable: " << MyStruct::st_Var;
    return 0;
}
