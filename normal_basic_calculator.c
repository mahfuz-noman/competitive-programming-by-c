#include <stdio.h>
#include <stdlib.h>

int main()
{
    int claIN;
    char ch;
    int a, b;
    float c, d;
    int temp = 1;

    printf("\n_-_-_-_-_Welcome_-_-_-_-_\n\n");
    while (claIN != 4)
    {
        printf("\n---Choose one of the following options---\n");
        printf("1. Normal(Add,Subtract,Multiply,Divide)\n2. Modulus\n3. Power\n4. Exit\n");
        printf("Now, enter your choice : ");
        scanf("%d", &claIN);
        switch (claIN)
        {
        case 1:
            printf("Give your what you want : ");
            scanf("%d %c %d", &a, &ch, &b);
            switch (ch)
            {
            case '+':
                printf("%d + %d = %d \n", a, b, a + b);
                break;
            case '-':
                printf("%d - %d = %d \n", a, b, a - b);
                break;
            case 'x':
                if (b == 0 || a == 0)
                {
                    printf("No wrong!");
                    break;
                }
                printf("%d x %d = %d \n", a, b, a * b);
                break;
            case 'X':
                if (b == 0 || a == 0)
                {
                    printf("No wrong!");
                    break;
                }
                printf("%d x %d = %d \n", a, b, a * b);
                break;
            case '*':
                if (b == 0 || a == 0)
                {
                    printf("No wrong!");
                    break;
                }
                printf("%d * %d = %d \n", a, b, a * b);
                break;
            case '/':
                if (b == 0 || a == 0)
                {
                    printf("No wrong!");
                    break;
                }
                c = a / b;
                printf(" %d / %d = %f", a, b, c);
                break;

            default:
                printf("\nyour given operator are not in our lib..\npls try again...\n");
                break;
            }
            break;

        case 2:
            printf("Give your what you want to mod : ");
            scanf("%d", &a);
            if (a == 0)
            {
                printf("No wrong!");
                break;
            }
            printf("The |%d| = %d",a,abs(a));
            break;
        case 3:
            printf("\nGive a : ");
            scanf("%d", &a);
            printf("Give n : ");
            scanf("%d", &b);
            if (b == 0 || a == 0)
            {
                printf("No wrong!");
                break;
            }
            for (int i = 1; i <= b; i++)
            {
                temp = temp*a;
            }
            printf("The %d^%d = %d", a, b, temp);
            break;
        case 4 :
            break;
        default:
            printf("Pls try again !");
            break;
        }
    }
    printf("thanks");
    printf("\nBye Bro\n");
    printf("Developed by : Mahfuz Ahmed Noman\n");
    return 0;
}
