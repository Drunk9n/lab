//Задание 13
#include <iostream>
int main() 
{
    int p = 2, n, k, m;
    scanf("%d", &n);
    while (n > 0) 
    {
        k = 0;
        m = p;
        while (m > 1) 
        {
            if (p % m == 0)
                k++;
            if (k > 1)
                break;
            m--;
        }
        if (k == 1) 
        {
            printf("%d ", p);
            n--;
        }
        p++;
    }
}