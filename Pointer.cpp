#include<stdio.h>
int main(){
	int num = 50;
	int* ptr = &num;
	
	printf("variable address is %d \n",&num);
	printf("variable address is %p \n",&num);
	printf("variable address is %s \n",&num);
	printf("variable address is %d \n",&(*ptr));
	printf("variable address is %p \n",&(*ptr));
	

	printf("value of variable is %d \n",num );
	printf("value of variable is %d \n",*ptr);
	
	// this is address of ptr pointer
	printf("address of ptr pointer %d \n",&ptr);
	
	return 0;
}
