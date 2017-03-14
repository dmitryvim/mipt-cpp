//
// Created by dmitry on 3/14/17.
//

#include "BigInteger.h"

int main() {
    int value = 285210914;
    BigInteger b(value);
    std::cout << value << " ";
    b.debug();
}