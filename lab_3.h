#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
int main() {
    void number_1() {
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

    void number_2() {
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

    void number_3() {
        printf("11\n");
        for (int i = 101; i <= 999; i++)
        {
            if (i / 100 == i % 10)
                printf("%d\n", i);
        }
    }

    void number_4() {
        printf("11\n");
        for (int i = 101; i <= 999; i++)
        {
            if (i / 100 == i % 10)
                printf("%d\n", i);
        }
    }

    void number_5() {
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
        int main()
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
    }

    void number_6() {
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

    void number_7() {
        int x = 1, n = 1;
        float y;
        scanf("%f", &y);
        while (x <= y) {
            n += 1;
            x += 1 / n;
        }
        printf("%d", n);
    }

    void number_9() {
        int q, a[15], i, z;
        scanf("%d", &q);
        z = 0;
        while (q)
        {
            a[z] = q % 10;
            q /= 10;
            z++;
        }
        q = 0;
        for (i = z - 1; i > -1; --i)
            if (a[i] != 0 && a[i] != 5)
                q = q * 10 + a[i];
        printf("%d", q);
    }

    void number_10() {
        int n, d = 1;
        scanf("%d", &n);
        while (d <= n)
        {
            if (n % d == 0)
                printf("%d ", d);
            d += 1;
        }

    }

    void number_11() {
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
    }

    void number_12() {
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

    void number_13() {
        int p = 2, n, k, m;
        scanf("%d", &n);
        while (n > 0)
        {
            k = 0;
            m = p;
            while (m > 1)
            {
                if (p % m == 0)
                    k++;
                if (k > 1)
                    break;
                m--;
            }
            if (k == 1)
            {
                printf("%d ", p);
                n--;
            }
            p++;
        }
    }

    void number_14() {
        int n, k, d1 = 1, d2 = 1, o;
        scanf("%d", &n);
        printf("1 1 ");
        for (k = 2; k < n; ++k)
        {
            o = d1 + d2;
            d1 = d2;
            d2 = o;
            printf("%d ", d2);
        }
    }

    void number_14() {
        int i, n, r, t, y, sum, sum1;
        scanf("%d", &n);
        r = 1, sum = 0, sum1 = 1; t = 0;
        for (i = 1; i <= n; i++)
        {
            r = 1 * i;
            y *= r;
            sum += y;
        }
        for (i = 2; i <= n; i++)
        {
            t = 1 + i;
            sum1 *= t;
        }
        if (sum == sum1)
        {
            printf("%d", sum1);
        }
        else
        {
            printf("—оотношени€ не удовлетвор€ют услови€м");
        }
    }

    void number_16() {
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

    void number_17a() {
        int n, i, p;
        p = 1;
        scanf("%d", &n);
        float x, q, y, t; x = 5.0; t = 0;
        for (i = 1; p <= n; i++)
        {
            q = sin(x);
            y = pow(q, p);
            p += 1;
            t += y;
        }
        printf("%f", t);
    }

    void number_17b() {
        int n, i, p;
        p = 1;
        scanf("%d", &n);
        float x, q, y, t; x = 5.0; t = 0;
        for (i = 1; p <= n; i++)
        {
            q = pow(x, p);
            y = sin(q);
            p += 1;
            t += q;
        }
        printf("%f", t);
    }

    void number_17c() {
        int i, n;
        scanf("%d", &n);
        float x, q, y, t; x = 5.0; t = 0.0;
        for (i = 1; i < n; i++)
        {
            y = sin(x);
            q = sin(y);
            t += y;
            y = q;
        }
        printf("%f", t);
    }

    void number_18() {
        double a = -1.0, sum = 0.0;
        for (int i = 1; i <= 1000; i++)
        {
            a *= -1.0;
            sum += a / i;
        }
        printf("%f\n", sum);
        a = -1.0, sum = 0.0;
        for (int i = 1000; i >= 1; i--)
        {
            a *= -1.0;
            sum += a / i;
        }
        printf("%f", sum);
    }

    void number_19() {
        int n, j, i;
        scanf("%d", &n);
        for (i = 6; i < n; i++)
        {
            int sum = 1;
            for (j = 2; j <= i / 2; j++)
                if (i % j == 0)
                    sum += j;
            if (sum == i)
                printf("%d ", i);
        }
    }

    void number_20() {
        int gg(int n)
        {
            if (n > 1)
            {
                for (int i = 2; i < n; i++)
                    if (n % i == 0)
                        return 0;
                return 1;
            }
            else
                return 0;
        }
        int main()
        {
            int p = 3, n;
            scanf("%d", &n);
            while (p + 2 < n)
            {
                if (gg(p) && gg(p + 2))
                    printf("(%d %d) ", p, p + 2);
                p += 1;
            }
        }
    }
}