//
// Created by dmitry on 3/14/17.
//

#include <cstring>
#include "BigInteger.h"

BigInteger::BigInteger(const int value) {
    int v = BASE;
    int n = 1;
    while (v < value) {
        v *= BASE;
        n++;
    }

    v = value;
    set_capacity(n);
    for (int i = 0; i < this->capacity; i++) {
        this->values[i] = v % BASE;
        v /= BASE;
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

BigInteger::BigInteger(const char *string) {
    assign(string);
}

BigInteger::BigInteger(const BigInteger &that) {
    set_capacity(that.capacity);
    std::memcpy(this->values, that.values, this->capacity * sizeof(int));
}

std::ostream &operator<<(std::ostream &out, const BigInteger &value) {
    for (int i = value.capacity - 1; i >= 0; --i) {
        int &v = value.values[i];
        int d = value.BASE / 10;
        while (i < value.capacity - 1 && d > v + 1) {
            out << '0';
            d /= 10;
        }
        out << v;
    }
    return out;
}

std::istream &operator>>(std::istream &in, BigInteger &value) {
    char str[1000];
    in >> str;
    value.assign(str);
    return in;
}

void BigInteger::assign(const char *string) {
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

