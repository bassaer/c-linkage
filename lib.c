#include <stdio.h>
#include <lib.h>

static int private_counter = 0;
int public_counter = 0;

void work() {
  printf("private_count = %d\n", private_counter);
  printf("public_count = %d\n", public_counter);
}
