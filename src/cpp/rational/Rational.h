//
// Created by dmitry on 3/21/17.
//

#ifndef MIPT_CPP_RATIONAL_H
#define MIPT_CPP_RATIONAL_H

#include <stdexcept>

class Rational {
private:
    int numenator;
    int denumenator;
public:
    Rational(int numenator, int denumenator);

    Rational(int value);
};

class zero_denumenator_error : std::runtime_error {
public:
    zero_denumenator_error();
};

#endif //MIPT_CPP_RATIONAL_H
