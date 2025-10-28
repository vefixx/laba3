#include "shift_right.h"

void ShiftRight(int& a, int& b, int& c) {
  int t = c;
  c = b;
  b = a;
  a = t;
}
