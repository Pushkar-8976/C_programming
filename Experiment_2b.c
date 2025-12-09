/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/

#include <stdio.h>
int main() {
int start, end, sum = 0;

printf("Enter the starting number: ");
scanf("%d", &start);

printf("Enter the ending number: ");
scanf("%d", &end);

printf("Odd numbers between %d and %d are: ", start, end);

for (int i = start; i <= end; i++)
{
    if (i % 2 != 0)
    {
        printf("%d ", i);
        sum += i;
    }
}

printf("\nSum of odd numbers: %d\n", sum);
return 0;
}
