#include <iostream>
#include "is_prime.h"
#include "zad1_proc28.h"

void Zad1Proc28() {
  using namespace std;

  int cnt = 0;
  int n;
  for (int i = 0; i < 10; i++) {
    cout << "Введите N #" << i+1 << ": ";
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