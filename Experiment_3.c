/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/
#include <stdio.h>

int main()
{
char op;
int num1, num2, result;
start:

printf("Enter an operator (+, -, *, /): ");
scanf(" %c", &op);

if (op == 'e')
{
    return 0;
}

printf("Enter the number: ");
scanf("%d", &num1);

printf("Enter the number: ");
scanf("%d", &num2);

switch (op)
{
case '+':
    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);
    goto start;

case '-':
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);
    goto start;

case '*':
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);
    goto start;

case '/':
    if (num2 != 0)
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    else
        printf("Error! Division by zero.\n");
    goto start;
}
return 0;
}
