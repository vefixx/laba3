#include <iostream>
#include "zad2_proc14.h"
#include "shift_right.h"

void Zad2Proc14() {
  using namespace std;

  int a, b, c;
  cout << "Введите a,b,c: ";
  cin >> a >> b >> c;
  ShiftRight(a,b,c);
  cout << "Результат сдвига: a=" << a << " b=" << b << " c=" << c << endl;
}