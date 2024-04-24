#include<stdio.h>
#include<math.h>
int main()
{
	 
	int a,b;
	
	printf("enter value a :\n");
	scanf("%d",&a); 
	printf("enter value b :\n");
	scanf("%d",&b);
	
	
	
//	float a = a * a;
//	float b = b * b;
	int c = a*a;
	int d = b*b;
	int e = 2*a*b;
	
	
	printf("solution : %d %d %d",c,d,e);
	return 0;
}
