/*NAME: PUSHKAR TANAJI KAKADE
CLASS: ECS BRANCH
DIVISION: E
ROLL NO: 51
UIN NO: 251S060
*/
#include <stdio.h>
int main(){
int physics, chemistry, maths;
int sum;
float avg;
printf("Enter physics number = ");
scanf("%d", &physics);
printf("Enter chemistry number = ");
scanf("%d", &chemistry);
printf("Enter maths number = ");
scanf("%d",&maths);

sum = physics + chemistry + maths;
avg = (float) sum/3;

printf("\nSum is %d \nAvg is %f", sum, avg);
(avg>=50)? printf("\nPerson is eligible for admission"): printf("\nPerson is not eligible for admission");
return 0;
}
