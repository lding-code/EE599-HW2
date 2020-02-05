#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

#include "src/lib/solution.h"


int main(int argc, char* argv[]) {
    Solution solution;
    std::cout << solution.HelloWorld() << std::endl;
    
    // Q2 Find size of int array
    int x[] = {1,2,3};
    std::cout << "Int array size: " << sizeof(x) << std::endl;
    std::cout << "Int element size: " << sizeof(x[0]) << std::endl;
    std::cout << "Number of int elements: " << sizeof(x)/sizeof(x[0]) << std::endl;

    // Q2 Find size of float array
    float y[] = {3.23, 2.9};
    std::cout << "Int array size: " << sizeof(y) << std::endl;
    std::cout << "Int element size: " << sizeof(y[0]) << std::endl;
    std::cout << "Number of int elements: " << sizeof(y)/sizeof(y[0]) << std::endl;

    // Q2 Find size of cahr array
    char z[] = {'a', 'b', 'c', 'd'};
    std::cout << "Char array size: " << sizeof(z) << std::endl;
    std::cout << "Char element size: " << sizeof(z[0]) << std::endl;
    std::cout << "Number of char elements: " << sizeof(z)/sizeof(z[0]) << std::endl;

    return EXIT_SUCCESS;
} 