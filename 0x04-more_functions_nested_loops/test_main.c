#include <stdio.h>
#include <limits.h>
int main()
{
    int n = INT_MIN;

    int a = -( n % 10);
    putchar(a + '0');
    return (0);
}
