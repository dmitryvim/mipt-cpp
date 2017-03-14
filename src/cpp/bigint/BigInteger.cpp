//
// Created by dmitry on 3/14/17.
//

#include <cstring>
#include "BigInteger.h"

BigInteger::BigInteger(int value) {
    int v = BASE;
    int n = 1;
    while (v < value) {
        v *= BASE;
        n++;
    }
    set_capacity(n);
    for (int i = 0; i < this->capacity; i++) {
        this->values[i] = value % BASE;
        value /= BASE;
    }
}

void BigInteger::set_capacity(const int capacity) {
    this->capacity = capacity;
    this->values = new int[this->capacity];
}

BigInteger::~BigInteger() {
    delete[]values;
}

void BigInteger::debug() {
    std::cout << "(capacity: " << this->capacity;
    for (int i = 0; i < this->capacity; ++i) {
        std::cout << "[" << i << ":" << this->values[i] << "]";
    }
    std::cout << ")\n";
}

BigInteger::BigInteger(char *string) {
    int len = (int) strlen(string);
    set_capacity(len / DIGIT_COUNT + 1);
    for (int i = 0; i < this->capacity; ++i) {
        int value = 0;
        for (int j = len - (i + 1) * DIGIT_COUNT; j < len - i * DIGIT_COUNT; j++) {
            if (j >= 0) {
                value = (value * 10) + (string[j] - '0');
            }
        }
        values[i] = value;
    }
}
