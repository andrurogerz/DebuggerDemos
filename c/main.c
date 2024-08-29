/* A simple C program that runs forever without debugger intervention */

#include <stdbool.h>
#include <stdint.h>

static bool shouldStop(bool new_should_stop) {
  static bool should_stop = false;
  should_stop = new_should_stop;
  return should_stop;
}

int main(int argc, char *argv[]) {
  bool should_stop = false;
  while (!should_stop) {
    should_stop = shouldStop(should_stop);
  }
}