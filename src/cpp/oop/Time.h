//
// Created by dmitry on 2/7/17.
//

#ifndef MIPT_CPP_TIME_H
#define MIPT_CPP_TIME_H


class Time {
private:
    int time_seconds;

    int hour();

    int minute();

    int second();
public:
    Time(int = 0, int = 0, int = 0);

    void print();

    Time plus(Time);

    Time minus(Time);

    Time operator+(Time);

    int to_seconds();
};


#endif //MIPT_CPP_TIME_H
