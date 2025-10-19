/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

using namespace homework;

int main() { 

    int d = 1;
    int e = 3; 
    int f = 5;

    homework::swap_ptr(&d, &e, &f);

    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    return 0;
  
}

