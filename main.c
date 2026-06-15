#include <stdio.h>

int main () {
  int n = 100;
  int o = n;
  n = 200;
  int *n_ptr = &n;
  int xyz = *n_ptr;

  printf("Your Bank Account Balance: %p", xyz);
}
