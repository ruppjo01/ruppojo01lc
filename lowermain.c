#include <stdio.h>
#include "lowerfunc.h"

int main(int argc, char* argv[]) {
  
  char c;

  while (c != EOF) {

      if (lowerfunc(c) == 0) { 
          c = c + 32;
          printf("%c",c);
          c = getchar();
      }
      else {
          printf("%c",c);
          c = getchar();
      }
   }
   
   return 0;
}
