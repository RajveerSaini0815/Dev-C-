#include<stdio.h>

void check(int a, int b){
		if(a > b){
		a = a+b;
		b = a-b;
		a = a-b;
	}
      
	printf("Even number between %d and %d \n",a,b);
	for(int i=a;i<b;i++){
  		if(i%2==0){
		  	printf("%d \n",i);
		  }
	  }
}

int main()
{
	int num1,num2,num;
	
	printf("Enter two value : \n");
	scanf("%d %d",&num1,&num2);
    
    check(num1,num2);
    
//	int x,y =prime(num1,num2);
	return 0;
	
}




