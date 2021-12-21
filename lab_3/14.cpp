//Задание 14
#include <iostream>
int main() 
{
    int n, k, d1 = 1, d2 = 1, o;
    scanf("%d", &n);
    printf("1 1 ");
    for (k = 2; k < n; ++k) 
    {
        o = d1 + d2;
        d1 = d2;
        d2 = o;
        printf("%d ", d2);
    }
}