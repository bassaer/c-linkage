#include <stdio.h>
#include <lib.h>

int private_counter;
int public_counter;

char *private_message;
char *public_message;

int main() {
  init(0, "Hello, World!");

  printf("== before ==\n");
  work();
  printf("============\n");

  private_counter = 999;
  public_counter = 999;

  private_message = "delete messge!";
  public_message = "delete messge!";

  printf("== after ===\n");
  work();
  printf("============\n");
}

