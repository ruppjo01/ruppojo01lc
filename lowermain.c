#include <stdio.h>
#include "lowerfunc.h"

int main(int argc, char* argv[]) {
  
  char c;

  c = getchar();

  while (c != EOF) {

      if (lowerfunc(c) == c)
        printf("%c",c);

      c = getchar();
   }
   
   return 0;
}
