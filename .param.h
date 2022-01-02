
#pragma once
#ifndef _pragma_h
#define _pragma_h

#include <stdint.h>
#include <inttypes.h>

typedef struct param param;
struct param {
  uint32_t pid;
  char const pname[64];
};

#endif /*  _pragma_h */
