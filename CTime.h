#pragma once
#ifndef CTIME_H
#define CTIME_H

#include <iostream>
using namespace std;

class CTime {
private:
    int gio;
    int phut;
    int giay;

    void ChuanHoa();

public:
    CTime(int h = 0, int m = 0, int s = 0);

    CTime operator+(int x) const;
    CTime operator-(int x) const;

    CTime& operator++();
    CTime operator++(int);

    CTime& operator--();
    CTime operator--(int);

    friend istream& operator>>(istream& in, CTime& t);
    friend ostream& operator<<(ostream& out, const CTime& t);
};

#endif
