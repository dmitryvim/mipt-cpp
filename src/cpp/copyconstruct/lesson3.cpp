//
// Created by dmitry on 2/14/17.
//
#include "int_array.h"

using namespace mipt;

int main() {
    int_array a(4);
    int_array b = a;
    (a + b + 3).print();
    return 0;
}