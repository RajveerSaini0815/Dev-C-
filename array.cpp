#include<stdio.h>
int main()
{
	               // array sum, leanth
//	 int age[] = {18, 22, 26, 58, 45, 65, 85, 95, 11, 12};
//	float i,leanth,lowest_age,sum;
// 	leanth = sizeof(age)/ 4;
//     printf("total age in array are : %.2f \n",leanth);
//	
//	lowest_age=age[0];
//	for(i=0;i<leanth;i++){
//	   if(i<lowest_age){
//	       sum += lowest_age;
//	   }
//    }
//    printf("total sum of age = %.2f \n",sum);
//    printf("avg age are = %.2f",sum/leanth);

                  
                        //  minimum
//  int age[] = {23, 22, 26, 58, 10, 15, 85, 95, 11, 12};
//	int k,leanth,minimum;
// 	leanth = sizeof(age)/ 4;
//     printf("total age in array are : %d \n",leanth);
//	
//	minimum=age[0];
//	for(k=0;k<leanth;k++){
//	   if(minimum > age[k]){
//	     minimum = age[k];
//	   }
//    }
//    
//    printf("minimum age are = %d",minimum);
    
    
                            // maximum
    
//    int age[] = {23, 22, 26, 58, 45, 15, 85, 96, 11, 12};
//	int i,leanth,maximum;
// 	leanth = sizeof(age)/ 4;
//     printf("total age in array are : %d \n",leanth);
//	
//	maximum=age[0];
//	for(i=0;i<leanth;i++){
//	   if(maximum < age[i]){
//	     maximum = age[i];
//	   }
//    }
//    
//    printf("maximum age are = %d",maximum);



                                  //max,minimum
// int product_price[]= {101,201,301,401,501,601,701,801,901};
//    int length = sizeof(product_price) / sizeof(product_price[0]);
//    
//    printf("total size of  array are : %d \n",length);
//     int i;
//     printf("The array are :\n");
//     for(i=0;i<length;i++){
//         printf("%d \n",product_price[i]);
//     }  
//     int k,j,maximum;
//     maximum = product_price[0];
//     for(k=0;k < length; k++){
//         if(maximum < product_price[k]){
//		 
//             maximum = product_price[k];
//         }
//     }
//     printf("maximum array is : %d \n",maximum);
//     
//     int h,minimum=product_price[0];
//     for(h=0;h<length;h++){
//     	if(minimum>product_price[h]){
//     		minimum = product_price[h];
//		 }
//	 }
//	 printf("minimum array is : %d",minimum);





         //Array use by user input 
                             
//    int number[5];
//    int size,i;
//    
//    printf("enter the size of arry to stored \n");
//    scanf("%d",&size);
//    
//    printf("The array size is : %d \n",size);
//    
//    for(i=0;i<size;i++){
//        printf("element : ");
//        scanf("%d",&number[i]);
//        
//    }
//    
//    int max,mini,k;
//    max=mini=number[0];
//    for(k=0;k<size;k++){
//        if(max<number[k]){
//            max=number[k];
//        }
//        if (mini>number[k]){		
//            mini=number[k];
//        }
//    
//    }
//    printf("max array is : %d \nmini array is : %d",max,mini);                     



                       /  create Multidimensional Arrays by user input and print also
//   int x,y;
//   printf("how may array you are want to crate: ");
//   scanf("%d",&x);
//   printf(" enter the array size : ");
//   scanf("%d" ,&y);
//   
//   int array[x][y];
//     
//     for(int i=0; i<x ;i++){
//     	 printf("\n enter the elemnts for array %d \n",i);
//         for(int k=0; k<y ;k++){
//             printf("enter element %d.%d - ",i,k);
//             scanf("%d",&array[i][k]);
//         }
//     } 
//    int array_print = array[0][0];
//     printf("\n This is array that you are stored- ");
//       for(int j=0; j<x; j++){
//       	    printf("\n array %d \n",j);
//       	 for(int h=0; h<y; h++){
//       	 	printf("elements are: %d \n",array[j][h]);
//			}
//	   }
	   
	   
	   
	   int x,y;
   printf("how may array you are want to crate: ");
   scanf("%d",&x);
   printf(" enter the array size : ");
   scanf("%d" ,&y);
   
   int array[x][y];
     
     for(int i=0; i<x ;i++){
     	 printf("\n enter the elemnts for array %d \n",i);
         for(int k=0; k<y ;k++){
             printf("enter element %d.%d - ",i,k);
             scanf("%d",&array[i][k]);
         }
     } 
    int array_print = array[0][0];
     printf("\n This is array that you are stored- ");
       for(int j=0; j<x; j++){
       	    printf("\n array %d \n",j);
       	 for(int h=0; h<y; h++){
       	 	printf("elements are: %d \n",array[j][h]);
			}
	   }
   	return 0;
}



// int number[2][5];
//  int size_1;
//  for(int i=1;i<=2;i++){
//  printf("enter the size of of array %d :",i);
//  scanf("%d",&size_1);
//   for(int k=1;k<=size_1;k++){
//       printf("enter the element %d.%d :",i,k);
//       scanf("%d",&number[i][k]);
//   }
//  }
  
