//
// Created by dmitry on 2/14/17.
//
#include "int_array.h"
#include "float_array.h"

using namespace mipt;

int main() {
    int_array a = 12;
    int_array b = a;
    float_array f = a;
    float_array f1 = 2.71828;

    a.print();
    f1.print();
    return 0;
}