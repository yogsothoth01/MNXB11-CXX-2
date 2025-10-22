#include "as1.hpp"
#include <iostream>
#include <memory>

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 

    //circular swap, tempvar acts as
    //temporary memory variable to store vals as they are swicthed.
    int tempvar = *a; 
    *a = *b;
    *b = *c;
    *c = tempvar;
}
//make_unique allocates memory for data value
UniqueData::UniqueData(int value) : data_(std::make_unique<int>(value)) {}

int UniqueData::get() const {
    return *data_;

}

//*data_ is not a traditional pointer
//a dereferenced pointer, references to an object held by a pointer
void UniqueData::set(int value) {

    *data_ = value;
}

}; // namespace homework
