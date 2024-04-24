#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find even numbers between two integers
void printEvenNumbers(int a, int b) {
    printf("Even numbers between %d and %d:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int num1, num2;

    printf("Enter two values: \n");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is smaller than num2
    if (num1 > num2) {
        swap(&num1, &num2);
    }

    // Print even numbers
    printEvenNumbers(num1, num2);

    return 0;
}





//#include<stdio.h>
//
//int check(int a, int b){
//		if(a > b){
//		a = a+b;
//		b = a-b;
//		a = a-b;
//	}
//	return a,b;
//}
//
//void prime(int a, int b){
//    	
//	for(int i=a;i<b;i++){
//  		if(i%2==0){
//		  	printf("%d \n",i);
//		  }
//	  }
//}
//
//int main()
//{
//	int num1,num2,num;
//	
//	printf("Enter two value : \n");
//	scanf("%d %d",&num1,&num2);
//    
//   
//    printf("Even number between %d and %d \n",check(num1,num2));
//    prime(num1,num2);
//	return 0;
//	
//}
