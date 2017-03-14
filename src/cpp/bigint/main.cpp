//
// Created by dmitry on 3/14/17.
//

#include "BigInteger.h"

int main() {

    int value = 285210914;
    BigInteger b(value);
    std::cout << "constructor(int):\n" << value << " ";
    b.debug();

    char str[] = "23434567898754567890";
    BigInteger b2(str);
    std::cout << "constructor(char*):\n" << str << " ";
    b2.debug();

    std::cout << "copy constructor:\n";
    BigInteger b3 = b2;
    b2.debug();
    b3.debug();
}