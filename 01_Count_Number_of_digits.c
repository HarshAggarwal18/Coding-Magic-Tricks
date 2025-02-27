#include <stdio.h>
#include <math.h>
int main()
{
    int num = 14353;
    int digits = log10(num) + 1;
    printf("number of digits : %d", digits);
    return 0;
}