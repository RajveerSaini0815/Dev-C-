#include<stdio.h>
int main(){
//	FILE *myFile;
//	myFile = fopen("firebox.txt","w");
//	fprintf(myFile,"this file is about firebox");
//	printf("your file has been created");
//	fclose(myFile);


//    FILE *dss;
//    dss = fopen("firebox.txt","a");
//    fprintf(dss,"\nthis is a firebox ");
//    printf("file is created");
//    fclose(dss);

      FILE *dss;
      dss = fopen("firebox.txt","r");
      char read[100];
      while(fgets(read,100,dss));
      printf("%s",read);
      fclose(dss);
  }
	
