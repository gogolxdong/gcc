/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint8x16_t
foo (uint8x16_t a, uint8x16_t b, mve_pred16_t p)
{
  return vsliq_m_n_u8 (a, b, 7, p);
}

/* { dg-final { scan-assembler "vpst" } } */
/* { dg-final { scan-assembler "vslit.8"  }  } */

uint8x16_t
foo1 (uint8x16_t a, uint8x16_t b, mve_pred16_t p)
{
  return vsliq_m (a, b, 7, p);
}

/* { dg-final { scan-assembler "vpst" } } */
/* { dg-final { scan-assembler "vslit.8"  }  } */
