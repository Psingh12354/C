#include<stdio.h>
#define PI 3.14159
int main()
{
	int area,radius;
	printf("Enter radius : ");
	scanf("%d",&radius);
	area=PI*radius*radius;
	printf("area = %d\n",area);
	return 0;
}
