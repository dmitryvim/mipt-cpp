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
    int sign = 1;

    void set_capacity(const int);

    void assign(const char *);

    BigInteger abs();

    static BigInteger abs_plus(const BigInteger &, const BigInteger &);

    static BigInteger abs_minus(const BigInteger &, const BigInteger &);

    static BigInteger abs_mult(const BigInteger &, const BigInteger &);
public:
    BigInteger(const int);

    BigInteger(const char *);

    BigInteger(const BigInteger &);

    ~BigInteger();

    void debug();

    friend std::ostream &operator<<(std::ostream &, const BigInteger &);

    //не забыть освободить старую память
    friend std::istream &operator>>(std::istream &, BigInteger &);

    ////
    //в реализации присваивания не забываем освобождать старую память
    BigInteger &operator=(const BigInteger &);

    BigInteger &operator=(const char *);

    BigInteger &operator=(const int);

    ////

    BigInteger operator-();

    ////
    BigInteger operator+(const BigInteger &);

};


#endif //MIPT_CPP_BIGINTEGER_H
