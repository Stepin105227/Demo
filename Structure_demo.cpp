#include <iostream>
struct MyStruct {
    int value;
    int age;
    int salary;
};

struct YourStruct {
    int value;
    int age;
    int salary;
};
void my_Function(void* data) {
    // Typecast the void pointer back to the original structure type
    MyStruct* myStruct = static_cast<MyStruct*>(data);
    std::cout << "Value: " << myStruct->value << std::endl;
    std::cout << "age: " << myStruct->age << std::endl;
    std::cout << "salary: " << myStruct->salary << std::endl;
}

void your_Function(void* data) {
    // Typecast the void pointer back to the original structure type
    YourStruct* your_struct = static_cast<YourStruct*>(data);
    std::cout << "Value: " << your_struct->value << std::endl;
    std::cout << "age: " << your_struct->age << std::endl;
    std::cout << "salary: " << your_struct->salary << std::endl;
}
YourStruct* your_Function_1( YourStruct *yourData1)
{
    yourData1->value = 100;
    yourData1->age = 200;
    yourData1->salary = 300;
    return (yourData1);
}
int main() {
    MyStruct *myData = new MyStruct();
    YourStruct yourData;
    myData->value = 42;
    myData->age = 25;
    myData->salary = 40;
    std::cout << "====== MyStruct:=====" << std::endl;
    my_Function(myData);
    std::cout << "====== YourStruct:=====" << std::endl;
    yourData.value = 10;
    yourData.age = 15;
    yourData.salary = 60;
    your_Function(&yourData);
    YourStruct *yourData2;
    YourStruct yourData1 = {
        .value = 11,
        .age = 22,
        .salary = 33,
    };
    yourData2 = your_Function_1( &yourData1);
    std::cout << "====== return structer:=====" << std::endl;
    std::cout << "Value: " << yourData2->value << std::endl;
    std::cout << "age: " << yourData2->age << std::endl;
    std::cout << "salary: " << yourData2->salary << std::endl;
    
    return 0;
}

/***************************************************
*************************output*********************
====== MyStruct:=====
Value: 42
age: 25
salary: 40
====== YourStruct:=====
Value: 10
age: 15
salary: 60
====== return structer:=====
Value: 100
age: 200
salary: 300
***************************************************/
