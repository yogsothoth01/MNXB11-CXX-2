#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 
    
    //circular swap, tempvar acts as
    //temporary memory variable to store vals as they are swicthed.
    int tempvar = *a; 
    *a = *b;
    *b = *c;
    *c = tempvar;
}



}; // namespace homework
