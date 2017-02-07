//
// Created by dmitry on 2/7/17.
//

#include "Time.h"
#include <iostream>

using namespace std;

int main() {
    Time a(12, 35), b(10, 33, 45);
    a.plus(b).print();
    a.minus(b).print();
    b.plus(a).print();
    b.minus(a).print();
    return 0;
}


