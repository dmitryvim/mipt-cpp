//
// Created by dmitry on 2/21/17.
//


#include "string.h"

int main() {
    dmitry::String string = "24";
    string.print();
    std::cout << string << std::endl;
    char *text = string;
    std::cout << text << std::endl;
}