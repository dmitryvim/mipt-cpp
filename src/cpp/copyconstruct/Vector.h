//
// Created by dmitry on 2/14/17.
//

#ifndef MIPT_CPP_VECTOR_H
#define MIPT_CPP_VECTOR_H


class Vector {
public:
    friend abs(Vector);

    void set(int, double);

    double get(int); //[]
    double mult(Vector); // *
    double mult(double); // *
    Vector plus(Vector); // +
    Vector minus(Vector); // -
    Vector vecMult(); // only *
    Vector operator&&(Vector);
    // []
};


#endif //MIPT_CPP_VECTOR_H
