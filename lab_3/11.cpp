//Задание 11
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
int main() {
    int n;
    scanf("%d", &n);
    for (int q = 2; wortyx(q, 3) <= n; q++) {
        if (n % wortyx(q, 2) == 0 && n % wortyx(q, 3) != 0) {
            printf("%d ", q);
        }
    }
}