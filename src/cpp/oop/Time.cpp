//
// Created by dmitry on 2/7/17.
//

#include "Time.h"
#include <iostream>

void Time::format_values() {
    this->minute += this->second / 60;
    this->second = this->second % 60;
    this->hour += this->minute / 60;
    this->minute = this->minute % 60;
}

int Time::to_seconds() {
    return this->hour * 60 * 60 + this->minute * 60 + this->second;
}

void Time::print() {
    std::cout << this->hour << ":" << this->minute << ":" << this->second << std::endl;
}

Time Time::plus(Time that) {
    Time result(this->hour + that.hour, this->minute + that.minute, this->second + that.second);
    return result;
}

Time Time::minus(Time that) {
    Time result(this->hour - that.hour, this->minute - that.minute, this->second - that.second);
    return result;
}

Time::Time(int hour, int minute, int second) :
        hour(hour), minute(minute), second(second) {
    format_values();
}

Time Time::operator+(Time that) {
    return plus(that);
}
