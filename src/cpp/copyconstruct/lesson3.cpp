//
// Created by dmitry on 2/14/17.
//
#include <iostream>
#include "int_array.h"

using namespace std;

int main() {
    int_array a(5);
    int_array b = a;
    a.print();
    b.print();
    return 0;
}