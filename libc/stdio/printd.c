#include <limits.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void printd(const char* restrict format, ...) {
  char debug[5] = "debug";
  memcat(format, debug);
  printf(format);
}
