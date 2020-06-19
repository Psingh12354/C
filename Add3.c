#include<stdio.h>
int main()
{
	float a,b,c,sum;
	printf("Enter three number for sum : ");
	scanf("%f %f %f",&a,&b,&c);
	printf("a=%f,b=%f,c=%f\n",a,b,c);
	sum=a+b+c;
	printf("Sum = %f\n",sum);
	return 0;
}
