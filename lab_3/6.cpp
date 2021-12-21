#include <iostream>
int main() 
{
    int q, z = 1;
    scanf("%d", &q);
    while (z < q) 
    {
        z *= 3;
    }
    if (z == q | q == 1)
        printf("True");
    else
       printf("False");
}