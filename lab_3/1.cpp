// lab 3 z1
#include <iostream>
void task_1(int variant) 
{
    int n = 0, d, e, g;
    for (int i = 111; i <= 999; i++) 
    {
        d = i / 100;
        e = i % 100 / 10;
        g = i % 10;
        if ((d == e | d == g | e == g) && variant == 1)
        {
            n++;
        }
        if (((d == e && g != e) | (e == g && d != e) | (d == g && d != e)) && variant == 2)
        {
            n++;
        }
    }
    printf("%d", n);
}