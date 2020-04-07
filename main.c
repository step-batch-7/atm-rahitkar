#include <stdio.h>
#include "atm.h"

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  int note_amounts[8] = {2000, 500, 100, 50, 20, 10, 5, 1};

  for (int i = 0; i < 6; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    for (int i = 0; i < 8; i++)
    {
      printf("%d notes of rs %d\n", notes >> 28, note_amounts[i]);
      notes = notes << 4;
    }
    printf("\n");
  }
  return 0;
}
