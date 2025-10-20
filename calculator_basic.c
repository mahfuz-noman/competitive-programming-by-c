#include <stdio.h>
int cal(int a, int b, char c);

int main()
{
    char c;
    int a, b;
    printf("give the math :");
    scanf("%d", &a);
    scanf(" %c", &c);
    scanf("%d", &b);
    int G = cal(a, b, c);
    printf("The answer of %d %c %d = %d", a, c, b, G);
    return 0;
}

int cal(int a, int b, char c)
{
    switch (c)
    {
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    case '-':
        return a - b;
        break;
    case '+':
        return a + b;
        break;

    default:
        return 000;
    }
}
