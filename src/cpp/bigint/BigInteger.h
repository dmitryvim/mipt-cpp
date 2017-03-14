//
// Created by dmitry on 3/14/17.
//

#ifndef MIPT_CPP_BIGINTEGER_H
#define MIPT_CPP_BIGINTEGER_H

#include <iostream>

class BigInteger {
private:
    const int BASE = 1000;
    int capacity;
    int *values = 0;

    void set_capacity(const int);

public:
    BigInteger(int);

    ~BigInteger();

    void debug();
};


#endif //MIPT_CPP_BIGINTEGER_H
