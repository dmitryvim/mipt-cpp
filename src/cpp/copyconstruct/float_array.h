//
// Created by dmitry on 2/14/17.
//

#ifndef MIPT_CPP_FLOAT_ARRAY_H
#define MIPT_CPP_FLOAT_ARRAY_H

#include "int_array.h"

namespace mipt {
    class float_array {
    private:
        int size;
        float *values;
    public:
        float_array(const int_array &that);

        float_array(const float &);

        ~float_array();

        void print();
    };
}

#endif //MIPT_CPP_FLOAT_ARRAY_H
