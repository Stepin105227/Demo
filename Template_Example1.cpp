#include <iostream>
using namespace std;
template <class datatype, class datatype1>
typename std::common_type<datatype, datatype1>::type add(datatype x, datatype1 y);

template <class datatype, class datatype1>
typename std::common_type<datatype, datatype1>::type add(datatype x, datatype1 y)
{
    return (x + y);
}

int main() {
    std::cout << "Sum: " << add(2, 3) << std::endl;           // Calls add<int, int>(2, 3)
    std::cout << "Sum: " << add(2, 3.5) << std::endl;        // Calls add<double, int>(2.5, 3)

    return 0;
}
