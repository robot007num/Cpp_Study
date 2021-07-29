#include "IntClass.h"

#include <iostream>

int main()
{

    IntClass a;
    a.testint(1);
    a.testint(1,2);
    a.testint(1,2,3);
    a.testint(1,2,3,4);

    std::cout<<" hello world"<<std::endl;
}