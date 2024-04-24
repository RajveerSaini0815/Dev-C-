#include<stdio.h>

int main()
{
  int student_id = 3388;
  int student_age = 19;
  float student_fee = 35.5;
  char student_grade ='A';
  char student_name[] = "James";
  

  printf("student id: %d \n",student_id);
  printf("name: %s \n",student_name);
  printf("age: %d \n",student_age);
  printf("fee: %.2f \n",student_fee);
  printf("grade: %c \n",student_grade);
  return 0;
}

