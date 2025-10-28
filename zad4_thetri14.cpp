#include <iostream>
#include "zad4_thetri14.h"

void Zad4TheTri14() {
  using namespace std;
  int x,p;
  cout << "Введите X и P";
  cin >> x >> p;

  string r = "";
  while (x != 0) {
    r += x % p;
    x /= p;
  }

  cout << r;
}
