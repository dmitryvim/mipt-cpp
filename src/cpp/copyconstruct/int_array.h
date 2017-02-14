//
// Created by dmitry on 2/14/17.
//

#ifndef MIPT_CPP_ARRAY_H
#define MIPT_CPP_ARRAY_H

#include <string>

namespace mipt {

    class int_array {
    private:
        int *values;
        int size;

        void log(std::string);

    public:
        int_array(const int size);

        int_array(const int_array &that);

        ~int_array();

        void print() const;

        int get_size() const;

        int get(int index) const;

        friend int max(int_array);

        int_array operator+(const int_array &);

        int_array operator+(const int &);
    };
}

#endif //MIPT_CPP_ARRAY_H
