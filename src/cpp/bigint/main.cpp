//
// Created by dmitry on 3/14/17.
//

#include "BigInteger.h"

int main() {

//    int value = 285210914;
//    BigInteger b(value);
//    std::cout << "constructor(int):\n" << value << " ";
//    b.debug();
//
//    char str[] = "2343450000000000567890";
//    BigInteger b2(str);
//    std::cout << "constructor(char*):\n" << str << " ";
//    b2.debug();
//
//    std::cout << "copy constructor:\n";
//    BigInteger b3 = b2;
//    b2.debug();
//    b3.debug();
//
//    std::cout << "std::cout\n";
//    std::cout << b2 << std::endl;
//    b2.debug();
//
//    std::cout << "std::cin\n please, input long value";
//    std::cin >> b2;
//    b2.debug();
    try {
        int k;
        std::cin >> k;
        if (k > 100) {
            throw "2145524wqe";
        }
        std::cout << "exception" << std::endl;
    } catch (int n) {
        std::cout << n;
    }


}

int nod(int a, int b) {
    if (a < 0 || b < 0) {
        throw "exception";
    }

}