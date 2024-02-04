#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

int main() {
    using namespace boost::multiprecision;
    
    cpp_int n = 2e32; // Using Boost Multiprecision cpp_int for arbitrary-precision arithmetic
    int a = 10e5; // 10 * 10^5

    std::cout << a % n << std::endl;

    return 0;
}
