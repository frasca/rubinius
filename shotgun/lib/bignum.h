#ifndef RBS_BIGNUM
#define RBS_BIGNUM 1

OBJECT bignum_new(STATE, int num);
OBJECT bignum_new_unsigned(STATE, unsigned int num);
OBJECT bignum_normalize(STATE, OBJECT b);
OBJECT bignum_add(STATE, OBJECT a, OBJECT b);
OBJECT bignum_sub(STATE, OBJECT a, OBJECT b);
OBJECT bignum_mul(STATE, OBJECT a, OBJECT b);
OBJECT bignum_div(STATE, OBJECT a, OBJECT b);
OBJECT bignum_equal(STATE, OBJECT a, OBJECT b);
OBJECT bignum_compare(STATE, OBJECT a, OBJECT b);
OBJECT bignum_and(STATE, OBJECT a, OBJECT b);
OBJECT bignum_or(STATE, OBJECT a, OBJECT b);
OBJECT bignum_xor(STATE, OBJECT a, OBJECT b);
OBJECT bignum_neg(STATE, OBJECT self);
OBJECT bignum_invert(STATE, OBJECT self);
unsigned long bignum_to_int(STATE, OBJECT self);
OBJECT bignum_to_s(STATE, OBJECT self, OBJECT radix);
void bignum_into_string(STATE, OBJECT self, int radix, char *buf, int sz);
OBJECT bignum_from_string(STATE, char *str, int radix);
OBJECT bignum_from_string_detect(STATE, char *str);
double bignum_to_double(STATE, OBJECT self);
OBJECT bignum_from_double(STATE, double d);
#endif
