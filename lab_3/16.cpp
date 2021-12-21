//Задание 16
#include <iostream>
int main()
{
    float n, eps = 0.01;
    scanf("%f", &n);
    float r = n / 2;
    int i = 0;
    while (r - n / r > eps) 
    {
        i++;
        r = 0.5 * (r + n / r);
    }
    printf("%f %f", n, r);
}