//
// Created by dmitry on 2/14/17.
//

#include "float_array.h"
#include <iostream>

mipt::float_array::float_array(const int_array &that) {
    this->size = that.get_size();
    this->values = new float[this->size];
    for (int i = 0; i < this->size; ++i) {
        this->values[i] = that.get(i);
    }
}

mipt::float_array::~float_array() {
    delete[] this->values;
}

void mipt::float_array::print() {
    for (int i = 0; i < this->size; ++i) {
        std::cout << this->values[i] << " - ";
    }
    std::cout << std::endl;
}

mipt::float_array::float_array(const float &value) {
    this->size = 1;
    this->values = new float(value);
}
