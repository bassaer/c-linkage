#include <stdio.h>
#include <lib.h>

int private_counter;
int public_counter;

char *private_message;
char *public_message;

int main() {
  char *default_message = "Hello, World!";
  init(0, default_message);

  printf("== before ==\n");
  work();
  printf("============\n");

  private_counter = 999;
  public_counter = 999;

  private_message = "delete messge!";
  public_message = "delete messge!";
  default_message = "??????????";

  printf("== after ===\n");
  work();
  printf("============\n");
}

