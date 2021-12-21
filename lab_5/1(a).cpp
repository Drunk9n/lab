#include <iostream>
int main()
{
    int a;
    while (a != EOF && a != '.') 
    {
        a = getchar();
        if (a == '?') 
        {
            putchar('!');
            continue;
        }
        putchar(a);
    }
}