//
// Created by dmitry on 2/14/17.
//

#ifndef MIPT_CPP_ARRAY_H
#define MIPT_CPP_ARRAY_H

class int_array {
private:
    int *values;
    int size;
public:
    int_array(const int size);

    int_array(const int_array &that);

    ~int_array();

    void print();
};

#endif //MIPT_CPP_ARRAY_H
