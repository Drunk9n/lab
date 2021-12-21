#include <iostream>
int main() 
{
    int n = 0, d, e, f;
    for (int i = 102; i <= 987; i++) 
    {
        d = i / 100;
        e = i % 100 / 10;
        f = i % 10;
        if (d != e && d != f && e != f)
            n++;
    }
    printf("%d", n);
}