/* { dg-require-effective-target aarch64_asm_f64mm_ok } */
/* { dg-additional-options "-march=armv8.2-a+f64mm" } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" } } */

#include "test_sve_acle.h"

/*
** trn2q_f64_tied1:
**	trn2	z0\.q, z0\.q, z1\.q
**	ret
*/
TEST_UNIFORM_Z (trn2q_f64_tied1, svfloat64_t,
		z0 = svtrn2q_f64 (z0, z1),
		z0 = svtrn2q (z0, z1))

/*
** trn2q_f64_tied2:
**	trn2	z0\.q, z1\.q, z0\.q
**	ret
*/
TEST_UNIFORM_Z (trn2q_f64_tied2, svfloat64_t,
		z0 = svtrn2q_f64 (z1, z0),
		z0 = svtrn2q (z1, z0))

/*
** trn2q_f64_untied:
**	trn2	z0\.q, z1\.q, z2\.q
**	ret
*/
TEST_UNIFORM_Z (trn2q_f64_untied, svfloat64_t,
		z0 = svtrn2q_f64 (z1, z2),
		z0 = svtrn2q (z1, z2))
