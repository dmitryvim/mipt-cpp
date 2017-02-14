//
// Created by dmitry on 2/14/17.
//

#include "int_array.h"
#include <iostream>

int_array::int_array(const int size) : size(size) {
    this->values = new int[size];

    for (int i = 0; i < size; ++i) {
        this->values[i] = i + 1;
    }
}

int_array::~int_array() {
    delete[] this->values;
}

void int_array::print() {
    for (int i = 0; i < this->size; ++i) {
        std::cout << this->values[i] << " ";
    }
    std::cout << std::endl;
}

int_array::int_array(const int_array &that) {
    this->size = that.size;
    this->values = new int[this->size];
    for (int i = 0; i < this->size; ++i) {
        this->values[i] = that.values[i];
    }
}
