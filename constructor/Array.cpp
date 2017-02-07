//
// Created by dmitry on 2/7/17.
//
#include <cstdio>

#include "Array.h"

Array::Array(int *ar, int n)  {
    values = new int[n];
    for (int i = 0; i < n; ++i) {
        values[i] = ar[i];
    }
}

Array::Array(int size): size(size) {
    values = new int[size];
}

void Array::print() {
    printf("\n{\n\tsize: %d\n\tvalues: []\n}\n", this->size);
}

Array::~Array() {
    delete []values;
}