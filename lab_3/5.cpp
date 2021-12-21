#include <iostream>
#include <math.h>
int q(int x, int level) {
    int n = 0, output = 1;
    if (level == 0)
        return 1;
    else {
        while (level > n) {
            output *= x;
            n += 1;
        }
    }
    return output;
}
int main () 
{
int n, copy_n, sum = 0;
    scanf("%d", &n);
    copy_n = n;
    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    if (q(sum, 3) == q(copy_n, 2))

        printf("True");
    else
        printf("False");
}