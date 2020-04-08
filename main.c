#include <stdio.h>
#include "atm.h"

void display_notes(unsigned int);

void display_notes(unsigned int notes)
{
  int note_amounts[8] = {2000, 500, 100, 50, 20, 10, 5, 1};

  for (int i = 0; i < 8; i++)
  {
    printf("%d notes of rs %d\n", notes >> 28, note_amounts[i]);
    notes = notes << 4;
  }
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};

  for (int i = 0; i < 6; i++)
  {
    display_notes(get_money(amounts[i]));
    printf("\n");
  }
  return 0;
}
