#include<stdio.h>
int main()
{
    printf("Welcom to machinary of Union Enterprise pvt ltd company \n");
	printf("Enter pin to login Machine ");
	int pin;
	scanf("%d",&pin);
	
if( pin==9887 ){
	printf("\n Machine is ready to start \nEnter the how many hours has done run machine? ");
	int time; 
	scanf("%d",&time);
    switch(time){
    	case 0 :
    printf("\n The Machine run time is eight hours remaning and machine temperature is 0 persent.");
       	break;
	    case 1 :
    printf("\n The Machine run time is seven hours remaning and machine temperature is 10 persent.");
        break;
        case 2 :
    printf("\n The Machine run time is six hours remaning and machine temperature is 20 persent.");
        break;
        case 3 :
    printf("\n TheMachine run time is five hours remaning and machine temperature is 30 persent.");
        break;
        case 4 :
    printf("\n The Machine run time is four hours remaning and machine temperature is 40 persent.");
        break;
        case 5 :
    printf("\n The Machine run time is three hours remaning and machine temperature is 50 persent.");
        break;
        case 6 :
    printf("\n The Machine run time is two hours remaning and machine temperature is 60 persent.");
        break;
        case 7 :
    printf("\n The Machine run time is one hours remaning and machine temperature is 70 persent.");
       	break;
       	
    default:
	     printf("\n The Machine is going to sleep mode, temperature is too high");
	}

	}
		else{
	printf("Incorrect pin, please enter the right pin to login");
       	
	}


	return 0;
}
