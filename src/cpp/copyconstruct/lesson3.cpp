//
// Created by dmitry on 2/14/17.
//
#include "int_array.h"

using namespace mipt;

int main() {
    int_array a(4);
    int_array b = a;
    (12 + a + b + 3).print();
    a++;
    a.print();
    return 0;
}