#include <iostream>
#include "windows.h"
#include "all.h"

int main() {
  using namespace std;
  SetConsoleOutputCP(CP_UTF8);

  int n;
  cout << endl << "Выберите № задачи (0 - выход)\n"
                  "1) Проверка степени\n"
                  "2) Правый циклический сдвиг\n"
                  "3) Вычисление Arctg\n"
                  "4) Перевод в систему счисления\n"
                  "5) Вычисление суммы";
  cin >> n;

  switch (n) {
    case 0:
      return 0;
    case 1:
      Zad1Proc28();
      break;
    case 2:
      Zad2Proc14();
      break;
    case 3:
      Zad3Proc44();
      break;
    case 4:
      Zad4TheTri14();
      break;
    case 5:
      Zad5Reccur17();
      break;
    default:
      cout << "Неизвестная задача";
  }

  main();
}