#include "CTime.h"

// Constructor
CTime::CTime(int h, int m, int s) {
    gio = h;
    phut = m;
    giay = s;

    ChuanHoa();
}

// Chuẩn hóa thời gian
void CTime::ChuanHoa() {

    int tongGiay =
        gio * 3600 +
        phut * 60 +
        giay;

    tongGiay %= 86400;

    if (tongGiay < 0)
        tongGiay += 86400;

    gio = tongGiay / 3600;

    tongGiay %= 3600;

    phut = tongGiay / 60;

    giay = tongGiay % 60;
}

// +
CTime CTime::operator+(int x) const {

    CTime temp(gio, phut, giay + x);

    return temp;
}

// -
CTime CTime::operator-(int x) const {

    CTime temp(gio, phut, giay - x);

    return temp;
}

// Prefix ++
CTime& CTime::operator++() {

    giay++;

    ChuanHoa();

    return *this;
}

// Postfix ++
CTime CTime::operator++(int) {

    CTime temp = *this;

    giay++;

    ChuanHoa();

    return temp;
}

// Prefix --
CTime& CTime::operator--() {

    giay--;

    ChuanHoa();

    return *this;
}

// Postfix --
CTime CTime::operator--(int) {

    CTime temp = *this;

    giay--;

    ChuanHoa();

    return temp;
}

// >>
istream& operator>>(istream& in, CTime& t) {

    cout << "Nhap gio: ";
    in >> t.gio;

    cout << "Nhap phut: ";
    in >> t.phut;

    cout << "Nhap giay: ";
    in >> t.giay;

    t.ChuanHoa();

    return in;
}

// <<
ostream& operator<<(ostream& out, const CTime& t) {

    if (t.gio < 10)
        out << "0";

    out << t.gio << ":";

    if (t.phut < 10)
        out << "0";

    out << t.phut << ":";

    if (t.giay < 10)
        out << "0";

    out << t.giay;

    return out;
}
