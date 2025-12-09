/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/
#include<stdio.h>

int factorialIterative(int num) {
    int prod = 1;
    for(int i = 1; i <= num; i++) {
        prod *= i;
    }
    return prod;
}

int main() {
    int num;
    printf("Enter Number = ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorialIterative(num));
    return 0;
}
