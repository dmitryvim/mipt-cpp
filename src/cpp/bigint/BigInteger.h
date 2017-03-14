//
// Created by dmitry on 3/14/17.
//

#ifndef MIPT_CPP_BIGINTEGER_H
#define MIPT_CPP_BIGINTEGER_H

#include <iostream>

class BigInteger {
private:
    const int BASE = 1000;
    const int DIGIT_COUNT = 3;

    int capacity;
    int *values = 0;

    void set_capacity(const int);

public:
    BigInteger(int);

    BigInteger(char *);

    ~BigInteger();

    void debug();
};


#endif //MIPT_CPP_BIGINTEGER_H
