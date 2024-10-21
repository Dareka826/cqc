/* Warn if function output discarded */
/* Warn if function doesn't return exit code/+message */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "array.h"
#include "tokenize.h"

int main(int argc, char **argv) {
    /* 1. Read source file */

    /* NOTE: Hardcoded just for testing */
    char *tmp_src = "fn main(argc: int, argv: []*) int { return 0; }";
    arr_char src = {
        .len = strlen(tmp_src),
        .ptr = tmp_src,
    };

    /* 2. Tokenize */

    tokenize(src.ptr);

    /* 3. Build AST (with basic error-correction) */
    /* 4. Full analysis */
    /* 5. Generate ANSI C */
}
