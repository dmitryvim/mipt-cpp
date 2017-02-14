//
// Created by dmitry on 2/14/17.
//

#include "int_array.h"
#include <iostream>

mipt::int_array::int_array(const int size) : size(size) {
    this->values = new int[size];

    for (int i = 0; i < size; ++i) {
        this->values[i] = i + 1;
    }
    log("constructor int");
}

mipt::int_array::~int_array() {
    log("destructor");
    delete[] this->values;
}

void mipt::int_array::print() const {
    for (int i = 0; i < this->size; ++i) {
        std::cout << this->values[i] << " ";
    }
    std::cout << std::endl;
}

mipt::int_array::int_array(const int_array &that) {
    this->size = that.size;
    this->values = new int[this->size];
    for (int i = 0; i < this->size; ++i) {
        this->values[i] = that.values[i];
    }
    log("copy constructor");
}

void mipt::int_array::log(std::string message) {
    std::cout << "[";
    for (int i = 0; i < this->size; ++i) {
        std::cout << this->values[i] << " ";
    }
    std::cout << "]" << message << std::endl;
}

int mipt::int_array::get_size() const {
    return this->size;
}

int mipt::int_array::get(int index) const {
    return this->values[index];
}

int mipt::max(mipt::int_array a) {
    int result = a.values[0];
    for (int i = 1; i < a.size; ++i) {
        if (result < a.values[i]) {
            result = a.values[i];
        }
    }
    return 0;
}
