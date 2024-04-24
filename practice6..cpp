#include<stdio.h>

int main()
{
	
	
	int month = 60;
	int per_emi = 10300;
	int interest = 16;
	
	float loan_amount = per_emi * month;
	float interest_amount = loan_amount * interest / 100;
	float principal = loan_amount - interest_amount;
	
	printf("loan amount: %f \n",loan_amount);
	printf("interest: %f \n",interest_amount);
	printf("principal amount: %f \n",principal);
	return 0;
}
