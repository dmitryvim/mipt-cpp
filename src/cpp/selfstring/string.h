//
// Created by dmitry on 2/21/17.
//

#ifndef MIPT_CPP_STRING_H
#define MIPT_CPP_STRING_H

namespace dmitry {

    class String {
    private:
        char *values;
        int capacity;
    public:
        String(const char *);

        String(const String &);

        ~String();

        int size() const;

        bool contains(const char);

        String operator+(const String &) const;

        String operator+(const char[]) const;

        String operator+(const char) const;

        friend String operator+(const char[], const String &) const;

        char operator[](const int) const;
    };

}


#endif //MIPT_CPP_STRING_H
