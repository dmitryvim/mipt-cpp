//
// Created by dmitry on 2/21/17.
//

#ifndef MIPT_CPP_STRING_H
#define MIPT_CPP_STRING_H

#include <cstring>
#include <iostream>

namespace dmitry {

    class String {
    private:
        char *values;
        size_t capacity;
    public:
        String(const char *);

        String(const String &);

        ~String();

        String operator=(const char *);

        // 1 + str // str + 1
        //cout << string
        friend std::ostream &operator<<(std::ostream &, const String &);

        operator char *() const;

        void print();
    };

}


#endif //MIPT_CPP_STRING_H
