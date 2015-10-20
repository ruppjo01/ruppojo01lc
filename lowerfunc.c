#include "lowerfunc.h"

int lowerfunc(char c) {
 
  if (c >= 'A' && c <= 'Z')
      c = (c + 32);
      return c;

  return 1;
}
