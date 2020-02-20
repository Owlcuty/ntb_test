#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "myfuncs.h"

int main()
{
  uint64_t num = 5243;
  char* s = (char*)calloc(10, sizeof(*s));
  printf("%i:: ~%ld bytes written~" "\n", __LINE__, num_to_str(num, s, 10));
  printf("%i:: {%s}" "\n", __LINE__, s);

  char* snum = "509325";
  printf("%i:: %ld" "\n", __LINE__, str_to_num(snum, 6));

  free(s);
}
