#include "atm.h"

unsigned int get_money(unsigned short int amount) {
  int indicator = 1, money = amount;
  int notes[8] = {2000, 500, 100, 50, 20, 10, 5, 1};

  for (int indx = 0; indx < 8; indx++)
  {
    indicator = indicator << 4;
    indicator = indicator + (money / notes[indx]);
    money = money % notes[indx];
  }
  
  return indicator;
}