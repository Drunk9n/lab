#include <stdio.h>
#include <malloc.h>

void number_1a() {
    int a;
    while (a != EOF && a != '.') {
        a = getchar();
        if (a == '?') {
            putchar('!');
            continue;
        }
        putchar(a);
    }
}

void number_1b() {
    int a;
    while (a != EOF && a != '.') {
        a = getchar();
        if (a == '-')
            continue;
        if (a == '&') {
            putchar('&');
        }
        putchar(a);
    }
}
void number_1c() {
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 96 && a <= 122)
            putchar(a);
    }
}

void number_1d(){
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 65 && a <= 90) {
            putchar(a + 32);
            continue;
        }
        putchar(a);
    }
}

void number_1e(){
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 96 && a <= 122) {
            putchar(a - 32);
            continue;
        }
        putchar(a);
    }
}

void number_1f(){
    int a, prev=0;
    while (a != EOF) {
        a = getchar();
        if (a == '+' && prev=='+') {
            continue;
        }
        prev=a;
        putchar(a);
    }
}

void number_1g() {
    char str[80];
    int i;
    printf("Введите последовательность: \n");
    fgets(str, sizeof(str), stdin);
    printf("Получившаяся последовательность: \n");
    for (i = 0; i <= sizeof(str); i++)
    {
        if (str[i] == '*' && str[i + 1] == '*')
        {
            printf("%c", '+');
            i++;
        }
        else
            printf("%c", str[i]);
    }
    return 0;
    }
}

void number_1h() {
    char str[80];
    int i;
    printf("Введите последовательность: \n");
    fgets(str, sizeof(str), stdin);
    printf("Получившаяся последовательность: \n");
    for (i = 0; i <= sizeof(str); i++)
    {
        if (str[i] == '0' && (int)str[i - 1] >= 49 && (int)str[i - 1] <= 57)
        {
            while (str[i] == '0')
            {
                printf("%c", str[i]);
                i++;
            }
        }
        if (str[i] == '0' && (int)str[i + 1] >= 49 && (int)str[i + 1] <= 57)
        {
            i++;
        }
        if (str[i] == '0' && str[i + 1] == '0')
        {
            while (str[i] == '0' && str[i + 1] == '0')
                i++;
            if (!((int)str[i + 1] >= 48 && (int)str[i + 1] <= 57))
                printf("%c", '0');
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}

void number_1i() {
    char str[80];
    int i;
    printf("Введите последовательность: \n");
    fgets(str, sizeof(str), stdin);
    printf("Получившаяся последовательность: \n");
    for (i = 0; i <= sizeof(str); i++)
    {
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e')
            i = i + 2;
        else
            printf("%c", str[i]);
    }
    return 0;
}

void number_2a() {
    char str[80];
    int i, j;
    printf("Введите последовательность: \n");
    fgets(str, sizeof(str), stdin);
    printf("Созданная последовательность: \n");
    if (strchr(str, '$'))
    {
        for (i = 0; str[i] != '$' && i < strlen(str); i++) {
            if (str[i] == '.')
            {
                printf("%c", '.');
                i++;
                j = i;
                while ((int)str[j] >= 48 && (int)str[j] <= 57)
                    j++;
                if (j - i > 2)
                {
                    printf("%c%c", str[i], str[i + 1]);
                    i += j - i - 1;
                }
                else
                {
                    printf("%c%c", str[i], str[i + 1]);
                    i++;
                }
            }
            else
                printf("%c", str[i]);
        }
    }
    else
        printf("Последовательность не заканчивается '$'");
    return 0;
}

void number_2b() {
    char str[80];
    int i, j;
    printf("Введите последовательность:\n");
    fgets(str, sizeof(str), stdin);
    printf("Созданная последовательность: \n");
    if (strchr(str, '$')) {
        for (i = 0; str[i] != '$' && i < strlen(str); i++)
        {
            if (str[i] == '0')
            {
                j = i;
                while (str[j] == '0')
                    j++;
                if (str[i - 1] == '.') {
                    for (; i <= j + 1; i++)
                        printf("%c", str[i]);
                }
                else if (str[j] == '.')
                {
                    printf("%c", '0');
                    i = j - 1;
                }
                else if (!((int)str[j] >= 49 && (int)str[j] <= 57))
                {
                    printf("%c", '0');
                    i = j - 1;
                }
            }
            else
                printf("%c", str[i]);
        }
    }
    else
        printf("Последовательность не заканчивается a '$'!");
    return 0;
}