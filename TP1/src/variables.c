#include <stdio.h>

int main() {

    signed char s_char = -10;
    unsigned char u_char = 250;

    signed short s_short = -30000;
    unsigned short u_short = 60000;

    signed int s_int = -2000000000;
    unsigned int u_int = 4000000000U;

    signed long s_long = -900000000000000000L;
    unsigned long u_long = 18000000000000000000UL;

    signed long long s_llong =-9000000000000000000LL;
    unsigned long long u_llong = 18000000000000000000ULL;

    float f =3.14f;
    double d = 3.1415926535;
    long double ld = 3.1415926535897932384626L;

    printf("signed char : %d\n", s_char);
    printf("unsigned char : %u\n", u_char);

    printf("signed short : %d\n", s_short);
    printf("unsigned short : %u\n", u_short);

    printf("signed int : %d\n", s_int);
    printf("unsigned int : %u\n", u_int);

    printf("signed long : %ld\n", s_long);
    printf("unsigned long : %lu\n" u_long);

    printf("signed long long : %lld\n", s_llong);
    printf("unsigned long long : %llu\n", u_llong);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
