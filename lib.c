#include <stdio.h>
#include <lib.h>

static int private_counter;
static char *private_message;

int public_counter;
char *public_message;

void init(int count, char *message) {
  private_counter = count;
  private_message = message;
  public_counter = count;
  public_message = message;
}

void work() {
  printf("private_count = %d\n", private_counter);
  printf("private_message = %s\n", private_message);
  printf("public_count = %d\n", public_counter);
  printf("public_message = %s\n", public_message);
}
