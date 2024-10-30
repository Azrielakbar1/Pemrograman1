#include <stdio.h>
int main()
{
  int batas = 5;
  int jumlah = 0;
  for (int i = 1; i <= batas; i++)
  {
    jumlah += i;
    printf("%d", i);
    if (i < batas)
      printf(" + ");
  }
  printf(" = %d", jumlah);
}