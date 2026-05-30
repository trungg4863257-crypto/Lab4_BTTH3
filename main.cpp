#include "CTime.h"

int main() {

    CTime t;

    cout << "Nhap thoi gian:\n";
    cin >> t;

    cout << "\nThoi gian hien tai: ";
    cout << t << endl;

    int congGiay;
    cout << "\nNhap so giay can cong: ";
    cin >> congGiay;

    cout << "Ket qua sau khi cong: ";
    cout << t + congGiay << endl;

    int truGiay;
    cout << "\nNhap so giay can tru: ";
    cin >> truGiay;

    cout << "Ket qua sau khi tru: ";
    cout << t - truGiay << endl;

    // ++t
    ++t;
    cout << "\nSau ++t: ";
    cout << t << endl;

    // t++
    t++;
    cout << "Sau t++: ";
    cout << t << endl;

    // --t
    --t;
    cout << "Sau --t: ";
    cout << t << endl;

    // t--
    t--;
    cout << "Sau t--: ";
    cout << t << endl;

    return 0;
}
