#include <stdio.h>
#include <math.h>
#include <float.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("isnormal(NAN)         = %d\n", isnormal(NAN));
    printf("isnormal(INFINITY)    = %d\n", isnormal(INFINITY));
    printf("isnormal(0.0)         = %d\n", isnormal(0.0));
    printf("isnormal(DBL_MIN/2.0) = %d\n", isnormal(DBL_MIN / 2.0));
    printf("isnormal(1.0)         = %d\n", isnormal(1.0));
    _getch();
    return 0;
}