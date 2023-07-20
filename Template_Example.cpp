#include <iostream>

template <class datatype>
datatype add(datatype x, datatype y);

template <class datatype>
datatype add(datatype x, datatype y)
{
    return (x+y);
}
int main() {
    std::cout <<"\nSum : "<<add(2,3);
    std::cout <<"\nSum : "<<add(2.5,static_cast<double>(3));
    return 0;
}
