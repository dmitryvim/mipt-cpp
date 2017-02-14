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

namespace mipt {
    int max(int_array a) {
        int result = a.values[0];
        for (int i = 1; i < a.size; ++i) {
            if (result < a.values[i]) {
                result = a.values[i];
            }
        }
        return result;
    }
}

mipt::int_array mipt::int_array::operator+(const mipt::int_array &that) {
    int_array result(this->size + that.size);
    for (int i = 0; i < this->size; ++i) {
        result.values[i] = this->values[i];
    }
    for (int j = 0; j < that.size; ++j) {
        result.values[this->size + j] = that.values[j];
    }
    return result;
}

mipt::int_array mipt::int_array::operator+(const int &value) {
    int_array result(this->size + 1);
    for (int i = 0; i < this->size; ++i) {
        result.values[i] = this->values[i];
    }
    result.values[this->size] = value;
    return result;
}

namespace mipt {
    int_array operator+(const int &value, const mipt::int_array &that) {
        int_array result(that.size + 1);
        for (int i = 0; i < that.size; ++i) {
            result.values[i + 1] = that.values[i];
        }
        result.values[0] = value;
        return result;
    }

    int_array &int_array::operator++(int) {
        int_array old(*this);
        for (int i = 0; i < this->size; ++i) {
            this->values[i]++;
        }
        return old;
    }
}
