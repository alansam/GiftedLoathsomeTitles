
#include <stdio.h>

#include ".param.h"

int main(int argc, char const * argv[]) {
  printf("Hello World\n");

  param const parms[] = {
    { 0, "parm 000", },
    { 1, "parm 001", },
    { 2, "parm 002", },
    { 3, "parm 003", },
    { 4, "parm 004", },
  };
  size_t const parms_ct = sizeof(parms) / sizeof(*parms);

  for (size_t p_ = 0ul; p_ < parms_ct; ++p_) {
    printf("%3" PRIu32 ": %s\n", parms[p_].pid, parms[p_].pname);
  }

  return 0;
}