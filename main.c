#include <stdio.h>
#include <lib.h>

int private_counter;
int public_counter;

int main() {
  printf("== before ==\n");
  work();
  printf("============\n");
  private_counter = 999;
  public_counter = 999;
  printf("== after ===\n");
  work();
  printf("============\n");
}

