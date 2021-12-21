#include <iostream>
int main() 
{
    int q, a[15], i, z;
    scanf("%d", &q);
    z = 0;
    while (q) 
    {
        a[z] = q % 10;
        q /= 10;
        z++;
    }
    q = 0;
    for (i = z - 1; i > -1; --i)
        if (a[i] != 0 && a[i] != 5)
            q = q * 10 + a[i];
    printf("%d", q);
}

