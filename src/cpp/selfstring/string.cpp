//
// Created by dmitry on 2/21/17.
//


#include "string.h"

namespace dmitry {

    String::String(const char *str) {
        size_t size = strlen(str);
        this->capacity = (size + 1) * 3 / 2;
        this->values = new char[this->capacity];
        memcpy(this->values, str, size);
    }

    String::String(const String &string) {
        this->capacity = string.capacity;
        this->values = new char[this->capacity];
        memcpy(this->values, string.values, capacity);
    }

    String::~String() {
        delete[]this->values;
    }

    String String::operator=(const char *str) {
        size_t size = strlen(str);
        this->capacity = (size + 1) * 3 / 2;
        this->values = new char[this->capacity];
        memcpy(this->values, str, size);
        return *this;
    }

    void String::print() {
        std::cout << this->values << std::endl;
    }

    std::ostream &operator<<(std::ostream &ostream, const String &string) {
        ostream << "[" << string.values << "]\n";
        return ostream;
    }

    String::operator char *() const {
        return this->values;
    }


}

