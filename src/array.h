#ifndef __ARRAY_H_rsTklD36
#define __ARRAY_H_rsTklD36

#include "types.h"
#include "token.h"

typedef struct {
    u32 len;
    char *ptr;
} arr_char;

typedef struct {
    u32 len;
    token *ptr;
} arr_token;

#endif
