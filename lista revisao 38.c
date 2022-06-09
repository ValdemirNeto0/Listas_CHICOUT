#include <stdio.h>

int main(void) {
 float chico = 1.50,ze = 1.10;
  int ano = 0;
  while(chico >= ze){
  ze += 0.03;
  chico += 0.02;
  ano++;  
  }
  printf("Anos:%i",ano);
}