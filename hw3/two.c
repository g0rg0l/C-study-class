#include <stdio.h>

int gcd(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2) n1 -= n2;
        else n2 -= n1;
    }

    return n1;
}


int main() {

    printf("%i", gcd(30, 18));  // 6

    return 0;
}
