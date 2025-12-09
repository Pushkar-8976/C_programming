/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/
#include <stdio.h>

int storage_class() {
    static int abc = 0;
    printf("Counter is %d \n",abc);
    abc++;
}

int main() {
    storage_class();
    storage_class();
    storage_class();
    storage_class();
    storage_class();
    return 0;
}
