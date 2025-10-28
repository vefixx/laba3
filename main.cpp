#include <iostream>
#include "windows.h"
#include "zad1_proc28.h"
#include "zad2_proc14.h"
#include "zad4_thetri14.h"

int main() {
  using namespace std;
  SetConsoleOutputCP(CP_UTF8);

  int n;
  cout << endl << "Выберите № задачи (0 - выход):";
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
    default:
      cout << "Неизвестная задача";
  }

  main();
}