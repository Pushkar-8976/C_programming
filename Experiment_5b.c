/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/
#include<stdio.h>

int factorialRecursive(int num) {
    if (num <= 1)
        return 1;
    return num * factorialRecursive(num - 1);
}

int main() {
    int num;
    printf("Enter Number = ");
    scanf("%d",&num);

    printf("Factorial of %d is %d", num, factorialRecursive(num));
    return 0;
}
