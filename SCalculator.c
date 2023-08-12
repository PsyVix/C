#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    float v1, v2, ans;
    char opr;
    int contCal = 1; // Initialize to 1 to start the loop

    while (contCal==1)
    {
        printf("Enter your Equation:");
        scanf("%f %c %f", &v1, &opr, &v2);

        switch (opr)
        {
            case '+':
                ans = v1 + v2;
                printf("Addition of %.1f and %.1f is: %.4f\n", v1, v2, ans);
                break;
            case '-':
                ans = v1 - v2;
                printf("Subtraction of %.1f and %.1f is: %.4f\n", v1, v2, ans);
                break;
            case '*':
                ans = v1 * v2;
                printf("Multiplication of %.1f and %.1f is: %.4f\n", v1, v2, ans);
                break;
            case '/':
                if (v2 != 0)
                {
                    ans = v1 / v2;
                    printf("Division of %.4f and %.4f is: %.4f\n", v1, v2, ans);
                }
                else
                {
                    printf("Cannot divide by zero.\n");
                }
                break;
            case '^':
                ans = pow(v1, v2);
                printf("%.1f^%.1f is: %.4f\n", v1, v2, ans);
                break;
            default:
                printf("Invalid operator.\n");
                break;
        }

        printf("Do you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &contCal);
    }

    printf("Calculator program ended.\n");
    return 0;
}
