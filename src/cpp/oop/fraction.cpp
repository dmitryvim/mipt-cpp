//
// Created by dmitry on 2/7/17.
//

#include "fraction.h"
#include <cstdio>
#include <iostream>

int nod(int a, int b) {
    if (b > a) {
        std::swap(a, b);
    }

    do {
        int c = a % b;
        a = b;
        b = c;
    } while (b != 1);

    return a;
}

void fraction::print() {
    printf("%d/%d\n", this->nominator, this->denominator);
};

double fraction::value() {
    return (float) (this->nominator) / this->denominator;
};

fraction::fraction(int nominator, int denominator) :
        nominator(nominator),
        denominator(denominator) {
    printf("fraction constructor\n");
}

fraction::~fraction() {
    printf("fraction destructor\n");
}

// <возвращаемый тип> <класс>::<имя метода> (<параметры>)
fraction fraction::plus(fraction that) {
    int nominator = this->nominator * that.denominator + that.nominator * this->denominator;
    int denominator = this->denominator * that.denominator;
    fraction result(nominator, denominator);
    return result;
}

int fraction::get_nominator() {
    return this->nominator;
}

int fraction::get_denominator() {
    return this->denominator;
}