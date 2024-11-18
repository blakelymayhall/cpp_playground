#include "cmake_test1/include/Bar.h"
#include "cmake_test1/include/Foo.h"
#include <iostream>

int main()
{
    Foo foo(5);
    Bar bar("test");

    std::cout << "The number is: " + std::to_string(foo.GetMemberVar()) + "\n" + 
        "the string is: " + bar.GetMemberString() << std::endl;

    return 0;
}