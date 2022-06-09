#include <stdio.h>

int main(void) {
  int n1,n2,res;
  puts("Doiminos 4\n");
  printf("|0| |1| |2| |3| |4| |5| |6|\n");
  printf("|4| |4| |4| |4| |4| |4| |4|\n");
  n1 = 1+2+3+4+5+6;
  n2 = 4+4+4+4+4+4;
  res= n1 + n2;
  printf("\nSoma dominos:%i",res);
  return 0;
}