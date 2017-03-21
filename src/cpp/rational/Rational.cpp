//
// Created by dmitry on 3/21/17.
//

#include "Rational.h"

Rational::Rational(int numenator, int denumenator) {
    if (denumenator == 0) {
        throw std::runtime_error("Denumenator cannot be zero.");
    }
    this->numenator = numenator;
    this->denumenator = denumenator;
}

Rational::Rational(int value) {
    this->numenator = value;
    this->denumenator = 1;
}

zero_denumenator_error::zero_denumenator_error() : std::runtime_error("Denumenator cannot be zero.") {}

