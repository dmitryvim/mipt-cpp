//
// Created by dmitry on 2/7/17.
//

#include "fraction.h"
#include <cstdio>

void fraction::print() {
    printf("%d/%d", this->nominator, this->denominator);
};

double fraction::value() {
    return (float) (this->nominator) / this->denominator;
};

fraction::fraction(int nominator, int denominator) {
    this->nominator = nominator;
    this->denominator = denominator;
}

int fraction::get_nominator() {
    return this->nominator;
}

int fraction::get_denominator() {
    return this->denominator;
}