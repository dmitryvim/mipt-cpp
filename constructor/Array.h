//
// Created by dmitry on 2/7/17.
//

#ifndef CSTRING_ARRAY_H
#define CSTRING_ARRAY_H

class Array {
public:
    int size;
    int* values;

    Array(int);
    Array(int*, int);
    ~Array();

    void print();
};

#endif //CSTRING_ARRAY_H
