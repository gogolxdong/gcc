#include <stdlib.h>
#include <stdio.h>

#include "libgccjit.h"

#define TEST_COMPILING_TO_FILE
#define OUTPUT_KIND      GCC_JIT_OUTPUT_KIND_ASSEMBLER
#define OUTPUT_FILENAME  "output-of-test-compile-to-assembler.c.s"
#include "harness.h"
#include "create-code-for-hello-world-executable.h"

/* { dg-final { jit-verify-output-file-was-created "" } } */
/* { dg-final { jit-verify-assembler "hello from ./output-of-test-compile-to-assembler.c.s.exe" } } */
