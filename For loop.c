#include<stdio.h>
int main()
{
                            // 1.Making heading by user input,  sub heading and point
//    int first_chap,last_chap;
//	
//	printf("First chapter \n");
//	scanf("%d",&first_chap);    
//	
//    printf("last chapter \n");
//	scanf("%d",&last_chap);    
//
//	int i=first_chap, k,j;
//	for(i; i<=last_chap;i++){
//		printf("\n Heading = %d \n",i);
//		for(k=1;k<=4;k++){
//			printf("sub heading = %d \n",k);
//			for(j=1;j<=3;j++){
//				printf("point = %d \n",j);
//			}
//		}
//		
//	}

          // 2.Making heading,sub heading and point ,all value from user
                               
        int first_heading,last_heading;
        int first_sub,last_sub;
        int first_point,last_point;
        
        printf("Making heading,sub heading and point \n \n");
	
	printf("Enter first heading [Integer value] \n");
	scanf("%d",&first_heading);    	
  printf("Enter last heading [Integer value] \n");
	scanf("%d",&last_heading);    
	
	printf("Enter first sub heading [Integer value] \n");
	scanf("%d",&first_sub);    	
  printf("Enter last sub heading [Integer value] \n");
	scanf("%d",&last_sub); 
	
	printf("Enter first point [Integer value] \n");
	scanf("%d",&first_point);    	
  printf("Enter last point [Integer value] \n");
	scanf("%d",&last_point); 
       
	
	int i=first_heading, k=first_sub, j=first_point;
	
	for(i; i<=last_heading;i++){
		printf("\n Heading = %d \n",i);
		for(k=1;k<=last_sub;k++){
			printf("sub heading = %d \n",k);
			for(j=1;j<=last_point;j++){
				printf("point = %d \n",j);
			}
		}
		
	}
//	                       // 3.alphabts
          
//          int alpha = 'a';         
//          printf("Alphabets from a - z are :");
//          for(alpha;alpha<='z'; alpha++){
//          	printf("\n%c\n",alpha);
//		  }

                               // 4. even numbers
                               
//        int i,n;
//		printf("even numbers till: \n");
//		scanf("%d",&n);
//		printf("all even numbers 1 to %d:",n);
//		
//		for(i=1;i<=50;i++){
//			if(i%2==0){
//				printf("\n%d",i);
//			}
//		}
//		                       
	return 0;
}
