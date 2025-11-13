#include <iostream>

#include "zad6.h"

using namespace std;

int Nod(int x, int y) {
    x = abs(x);
    y = abs(y);
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

void Sokr(int &num, int &znam) {
    int nod = Nod(num, znam);
    num /= nod;
    znam /= nod;
    if (znam < 0) {
        num *= -1;
        znam *= -1;
    }
}

void Sub(int a, int b, int c, int d, int &res_num, int &res_znam) {
    res_znam = b * d;
    res_num = a * d - c * b;
    Sokr(res_num, res_znam);
}

void Mult(int a, int b, int c, int d, int &res_num, int &res_znam) {
    res_num = a * c;
    res_znam = b * d;
    Sokr(res_num, res_znam);
}

void Zad6() {
    int a, b, c, d, e, f;

    cout << "Введите a, b, c, d, e, f для уравнения ((a/b) - (c/d)) * (e/f): ";
    cin >> a >> b >> c >> d >> e >> f;

    if (b == 0 || d == 0 || f == 0) {
        cout << "Нельзя делить на 0" << endl;
        Zad6();
        return;
    }

    int num, znam;
    int result_num, result_znam;

    Sub(a, b, c, d, num, znam);
    Mult(num, znam, e, f, result_num, result_znam);

    // a = 1, b = 2
    // c = 1, d = 4
    // e = 1, f = 3
    //
    // 0.0833333333

    // a = 1, b = 5
    // c = 3, d = 5
    // e = 5, f = 2
    //
    // -1.0

    // a = 5, b = 6
    // c = 1, d = 4
    // e = -9, f = 5
    //
    // -1.05

    // a = 7, b = 8
    // c = 14, d = 16
    // e = 10, f = 1
    //
    // 0.0

    cout << "Ответ выражения: " << (double) result_num / result_znam << endl;

    cout << " /\\_/\\ " << endl;
    cout << "( o.o )" << endl;
    cout << " > ^ < " << endl;
    cout << "/  ~  \\" << endl;
    cout << "|  m  |" << endl;
    cout << " \\_ _/ " << endl;
}