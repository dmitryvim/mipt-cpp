//
// Created by dmitry on 2/7/17.
//

#include "fraction.h"
#include <iostream>

using namespace std;

int main() {
    fraction a(1, 3), b(4, 6);
    a.plus(b).print();
    cout << "hello" << endl;
    return 0;
}


