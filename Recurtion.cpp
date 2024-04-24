#include<stdio.h>
//
//int input();
//int factoliale();
//int main()
//{
//	int num,result;
//	num = input();
//	result = factoliale(num);
//	printf("\nthis is sum : %d",result);
//	return 0;
//}
//
//int input(){
//	int a;
//	printf("enter the factoliale number:\n");
//	scanf("%d",&a);
//	return a;
//}
//int factoliale(int x){
//	int sum;
//	if(x==0){
//	    return 0;
//	}else{
//	   	return  x + factoliale(x-1);
//	}
//}


                            //   2. factorial

#include<stdio.h>

int input();
int factorial();
int main()
{
	int num,result;
	num = input();
	result = factorial(num);
	printf("\nthis is factorial of your number : %d",result);
	return 0;
}

int input(){
	int a;
	printf("enter the factorial number:\n");
	scanf("%d",&a);
	return a;
}
int factorial(int x){
	if(x==0){
	    return 1;
	}else{
	    return x * factorial(x-1);
	}
}
