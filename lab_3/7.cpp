#include <iostream>
int main() 
{
    int x = 1, n = 1;
    float y;
    scanf("%f", &y);
    while (x <= y) {
        n += 1;
        x += 1 / n;
    }
    printf("%d", n);
}
