#pragma once
#include <iostream>

class TRAIN {
public:
    TRAIN();
    TRAIN(const char* destination, int number, int time);
    TRAIN(const TRAIN& other);
    ~TRAIN();

    TRAIN& operator=(const TRAIN& other);
    bool operator<(const TRAIN& other) const;   

    const char* getDestination() const;
    int getNumber() const;
    int getTime() const;
    void setDestination(const char* destination);
    void setNumber(int number);
    void setTime(int time);

    static int parseTime(const char* text);     // из строки ЧЧ:ММ

private:
    char* destination_;
    int number_;
    int time_;
};

std::ostream& operator<<(std::ostream& out, const TRAIN& train);
std::istream& operator>>(std::istream& in, TRAIN& train);