//
// Created by dmitry on 2/28/17.
//

#include <iostream>
#include "Matrix.h"

int main() {
    Matrix m(2, 2);
    std::cin >> m;
    m.set(1, 0, 31415);
    std::cout << m;

    std::cout << Matrix::eye(3);
}