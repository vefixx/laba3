#include "all.h"
#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void ShiftRight(int &a, int &b, int &c) {
    int t = c;
    c = b;
    b = a;
    a = t;
}

double Arctg1(double x, double e) {
    double sum = 0.0;
    double current = x;
    int k = 1;

    for (;;) {
        double a = pow(-1.0, k) * pow(x, 2 * k + 1);
        double b = 2.0 * k + 1.0;
        current = a / b;

        if (abs(current) < e) {
            break;
        }

        sum += current;
        k++;
    }

    return sum;
}

long long ToP(int x, int p) {
    long long result = 0;
    long long power_of_10 = 1;
    int ost;

    // 3. Основной цикл: метод последовательного деления на P
    int current_X = x;
    while (current_X > 0) {
        ost = current_X % p;
        result += (long long) ost * power_of_10;
        current_X /= p;
        power_of_10 *= 10;
    }

    return result;
}

double SumRyad(int n) {
    if (n == 1) {
        return 2.0;
    }

    double current = (double) (n + 1) / n;

    return SumRyad(n - 1) + current;
}

void Zad1Proc28() {
    int cnt = 0;
    int n;
    for (int i = 0; i < 10; i++) {
        cout << "Введите N #" << i + 1 << ": ";
        cin >> n;

        if (n <= 1) {
            cout << "Число N должно быть больше 1";
            continue;
        }

        if (IsPrime(n)) {
            cnt++;
        }
    }

    cout << "Количество простых чисел: " << cnt;
}

void Zad2Proc14() {
    int a, b, c;
    cout << "Введите a,b,c: ";
    cin >> a >> b >> c;
    ShiftRight(a, b, c);
    cout << "Результат сдвига: a=" << a << " b=" << b << " c=" << c << endl;
}

void Zad4TheTri14() {
    int x, p;
    cout << "Введите X и P";
    cin >> x >> p;

    if (p < 0 | p > 9) {
        cout << "Неверный ввод числа p" << endl;
        Zad4TheTri14();
        return;
    }

    if (x < 0) {
        cout << "Число x должно быть >= нуля" << endl;
        Zad4TheTri14();
        return;
    }

    cout << "Число " << x << " в системе счисления по основанию " << p << " равно: " << ToP(x, p) << endl;
}

void Zad3Proc44() {
    double x, e;

    cout << "Введите x и ε: ";
    cin >> x >> e;

    if (abs(x) >= 1.0 || e <= 0.0) {
        cout << "Неверный значения. Ограничения: |x| < 1 и ε > 0" << endl;
        Zad3Proc44();
        return;
    }

    cout << "Arctg числа " << x << " равен: " << Arctg1(x, e) << endl;
}

void Zad5Reccur17() {
    int n;
    cout << "Введите № члена ряда: ";
    cin >> n;

    if (n < 1 || n >= 30) {
        cout << "N должно быть натуральным числом, 1 <= N < 30" << endl;
        Zad5Reccur17();
        return;
    }

    cout << "Член №" << n << " равен: " << SumRyad(n) << endl;
}


