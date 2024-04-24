#include<stdio.h>

void greeting();
void menu();
int menuInput();
int item();
void breakfast();
void lunch();
void dinner();
void fast_food();
void sweets();
void ice_cream();
void tea();
void coffee();
void food_input();
//void roti_fun();


int main(){
	int x;
    greeting();
    menu();
    x=menuInput();
    item(x);
	return 0;	
}

void greeting(){
	printf("The Dss Rastaurant \n");
	printf("Hello Sir/Madam \nWelcome to Dss rastaurant \n");
}

void menu(){
	printf("Menu card \n");
	printf("1.Breakfast \n");
	printf("2.Lunch \n");
	printf("3.Dinner \n");
	printf("4.Fast Food\n");
	printf("5.Sweets \n");
	printf("6.Ice cream \n");
	printf("7.Tea \n");
	printf("8.Coffee \n");
	
}

int menuInput(){
    int a;
	printf("\nEnter a number from Menu card \n");
	scanf("%d",&a);
	return a;
}
 
int item(int x){
	switch(x){
		case 1 :
		    breakfast();
			break;	
		case 2 :
		    lunch();
			break;
		case 3 :
		    dinner();
			break;
		case 4:
		    fast_food();
		    break;
		case 5 :
		    sweets();
			break;	
		case 6 :
		    ice_cream();
			break;	
		case 7 :
		    tea();
			break;	
		case 8 :
		    coffee();
			break;
			
		default:
			printf("Please select valid option");
			menuInput();
			item(x);
			
	}								
} 

void breakfast(){
   printf("The Breckfast Menu\n");
   printf("1.Poha \n");
   printf("2.Bread batter \n");
   printf("3.Upma \n");	
   printf("4.Paratha \n");
   printf("5.Khaman Dhokla \n");
   food_input();
}

void lunch(){
	printf("The Lunch Menu\n");
	printf("1.Kadai Paneer\n");
	printf("2.Matar Paneer\n");
	printf("3.Aloo Chole\n");
	printf("4.Sev Tamater\n");
	printf("5.Besan Gatte\n");
	printf("6.Daal Fry\n");
	
	food_input();
//	roti_fun();
}

void dinner(){
	printf("The Dinner Menu\n");
	printf("1.Dal Makhani\n");
	printf("2.Bhindi Masala\n");
	printf("3.Sambar\n");
	printf("4.Malai Kofta\n");
	printf("5.Kaju Giri\n");
	printf("6.Shahi Paneer\n");
	food_input();
//	roti_fun();
}

void fast_food(){
    printf("1.Pizza\n");
    printf("2.Sandwich\n");
    printf("3.Burger\n");
    printf("4.Chowmein\n");
    printf("5.French Fries\n");
    printf("6.Momos\n");
    printf("7.Manchurian\n");
    printf("8.Masala Patties\n");
    printf("9.Potato Salad\n");
    printf("10.Hot dog\n");
    food_input();
}

void sweets(){
	printf("The Sweets Menu\n");
	printf("1.Kaju Barfi\n");
	printf("2.Rasgulla\n");
	printf("3.Gulab Jamun\n");
	printf("4.Ras Malai\n");
	printf("5.Milk Cake\n");
	printf("6.Jalebi\n");
	food_input();
}

void ice_cream(){
	printf("The Ice Cream Menu\n");
	printf("1.Vanilla\n");
	printf("2.Strawberry\n");
	printf("3.Mango Tango\n");
	printf("4.Kaju Kishmish\n");
	printf("5.Choco Chips\n");
	printf("6.Kwsar Pista\n");
	food_input();
	
}

void tea(){
	printf("The Tea Menu\n");
	printf("1.Plan Tea\n");
	printf("2.Rose Tea\n");
	printf("3.Elaichi Tea\n");
	printf("4.Adrak Tea\n");
	printf("5.Choclate Tea\n");
	printf("6.Special Tea\n");
	food_input();
}

void coffee(){
	printf("The Coffee Menu\n");
	printf("1.Hot Coffee\n");
	printf("2.Cold Coffee\n");
	food_input();
}

void food_input(){
    int a;
    printf("Enter item number which you want\n");
    scanf("%d",a);
}

/* void roti_fun(){
    printf("1.Plan Roti\n");
    printf("2.Rumali Roti\n");
    printf("3.Tandoori Roti\n");
    printf("4.Makki Roti\n");
    printf("5.Bajra Roti\n");
    food_input();
    
} */
