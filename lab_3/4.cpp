#include <iostream>
int main() 
{
    printf("11\n");
    for (int i = 101; i <= 999; i++) 
    {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}