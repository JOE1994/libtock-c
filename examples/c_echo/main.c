/* vim: set sw=2 expandtab tw=80: */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <console.h>

int main(void) {
  int i = 0;
  int input;

  printf("Simple Echo example via serial\n");

  // 100,000 x 2 Send bytes via USART
  for(i=0;i<200000;i++) {
    printf("A");
    // input = getch();
  }
  printf("\nFIN\n");

  return 0;
}
