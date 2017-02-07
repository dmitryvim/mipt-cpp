//
// Created by dmitry on 2/7/17.
//

#ifndef MIPT_CPP_TIME_H
#define MIPT_CPP_TIME_H


class Time {
private:
    int hour;
    int minute;
    int second;

    void format_values();

public:
    Time(int hour = 0, int minute = 0, int second = 0);;

    void print();

    Time plus(Time);

    Time minus(Time);

    Time operator+(Time);

    int to_seconds();
};


#endif //MIPT_CPP_TIME_H
