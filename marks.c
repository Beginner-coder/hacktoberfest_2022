#include <stdio.h>
int main()
{
	int roll;
	float phy,chem,maths,eng,avg=0.0;
	printf("what is your roll number and marks");
	scanf("%d",&roll);
	scanf("%f%f%f%f",&phy,&chem,&maths,&eng");
	avg=(phy+chem+maths+eng)/4;
	
	printf("Your Roll \n%d",roll);
	printf("Students average\n%f",avg);
	return 0;
}