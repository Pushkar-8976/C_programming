/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/
#include <stdio.h>

int main() {
int arr[] = {10, 20, 30, 40, 50};
int size = sizeof(arr) / sizeof(arr[0]);
int *ptr;
int i;

ptr = arr + size - 1;

printf("Original array elements: ");
for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
}
printf("\n");

printf("Array elements in reverse order: ");
for (i = 0; i < size; i++) {
    printf("%d ", *ptr);
    ptr--;
}
printf("\n");

return 0;
}
