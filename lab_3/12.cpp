//Задание 12
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int wortyx(int x, int lv) 
{
    int n = 0, output = 1;
    if (lv == 0)
        return 1;
    else 
    {
        while (lv > n) 
        {
            output *= x;
            n += 1;
        }
    }
    return output;
}
int main() 
{
    int m, k = 1;
    scanf("%d", &m);
    while (wortyx(4, k + 1) < m) {
        k += 1;
    }
    printf("%d", k);
}