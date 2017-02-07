//
// Created by dmitry on 2/7/17.
//

#include "Time.h"
#include <iostream>


int Time::to_seconds() {
    return this->time_seconds;
}

void Time::print() {
    std::cout << (this->time_seconds < 0 ? "-" : "")
              << hour() << ":" << minute() << ":" << second() << std::endl;
}

Time Time::plus(Time that) {
    Time result(0, 0, this->time_seconds + that.time_seconds);
    return result;
}

Time Time::minus(Time that) {
    Time result(0, 0, this->time_seconds - that.time_seconds);
    return result;
}

Time::Time(int hour, int minute, int second) :
        time_seconds(hour * 3600 + minute * 60 + second) {
}

Time Time::operator+(Time that) {
    return plus(that);
}

int Time::second() {
    return std::abs(this->time_seconds % 60);
}

int Time::minute() {
    return std::abs((this->time_seconds / 60) % 60);
}

int Time::hour() {
    return std::abs(this->time_seconds / 3600);
}
