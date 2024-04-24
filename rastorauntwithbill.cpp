#include <stdio.h>
#define MAX_ITEMS 10

int array[MAX_ITEMS];
int Item = 0;

void greeting();
void menu();
int menuInput();
void item();
void breakfast();
void lunch();
void dinner();
void fast_food();
void sweets();
void ice_cream();
void tea();
void coffee();
void food_input(int *ptr);
void roti_fun(int *ptr);
void generate_bill();

int main(){
    int x;
    greeting();
    menu();
    x = menuInput();
    item(x);
    generate_bill();
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

void item(int x){
    switch(x){
        case 1:
            breakfast();
            break;    
        case 2:
            lunch();
            break;
        case 3:
            dinner();
            break;
        case 4:
            fast_food();
            break;
        case 5:
            sweets();
            break;    
        case 6:
            ice_cream();
            break;    
        case 7:
            tea();
            break;    
        case 8:
            coffee();
            break;
            
        default:
            printf("Please select valid option");
            menuInput();
            item(x);
    }                                
} 

void breakfast(){
   printf("The Breakfast Menu\n");
   printf("1.Poha - 30?\n");
   printf("2.Bread batter - 40?\n");
   printf("3.Upma 50?\n");    
   printf("4.Paratha - 25?\n");
   printf("5.Khaman Dhokla - 55?\n");
   food_input(array);
}

void lunch(){
    printf("The Lunch Menu\n");
    printf("1.Kadai Paneer - 320?\n");
    printf("2.Matar Paneer - 240?\n");
    printf("3.Aloo Chole - 180?\n");
    printf("4.Sev Tamater - 160?\n");
    printf("5.Besan Gatte - 160?\n");
    printf("6.Daal Fry - 140?\n");
    food_input(array);
    roti_fun(array);
}

void dinner(){
    printf("The Dinner Menu\n");
    printf("1.Dal Makhani - 140?\n");
    printf("2.Bhindi Masala - 160?\n");
    printf("3.Sambar - 120?\n");
    printf("4.Malai Kofta - 230?\n");
    printf("5.Kaju Giri - 340?\n");
    printf("6.Shahi Paneer - 320?\n");
    food_input(array);
    roti_fun(array);
}

void fast_food(){
    printf("1.Pizza - 220?\n");
    printf("2.Sandwich - 80?\n");
    printf("3.Burger - 60?\n");
    printf("4.Chowmein - 55?\n");
    printf("5.French Fries - 50?\n");
    printf("6.Momos - 60?\n");
    printf("7.Manchurian - 80?\n");
    printf("8.Masala Patties - 40?\n");
    printf("9.Potato Salad - 50?\n");
    printf("10.Hot dog - 35?\n");
    food_input(array);
}

void sweets(){
    printf("The Sweets Menu\n");
    printf("1.Kaju Barfi - 520?\n");
    printf("2.Rasgulla - 260?\n");
    printf("3.Gulab Jamun - 360?\n");
    printf("4.Ras Malai - 460?\n");
    printf("5.Milk Cake - 340?\n");
    printf("6.Jalebi - 280?\n");
    food_input(array);
}

void ice_cream(){
    printf("The Ice Cream Menu\n");
    printf("1.Vanilla - 120?\n");
    printf("2.Strawberry - 80?\n");
    printf("3.Mango Tango - 70?\n");
    printf("4.Kaju Kishmish - 140?\n");
    printf("5.Choco Chips - 60?\n");
    printf("6.Kwsar Pista - 180?\n");
    food_input(array);
}

void tea(){
    printf("The Tea Menu\n");
    printf("1.Plan Tea - 20?\n");
    printf("2.Rose Tea - 30?\n");
    printf("3.Elaichi Tea - 25?\n");
    printf("4.Adrak Tea - 25?\n");
    printf("5.Choclate Tea - 40?\n");
    printf("6.Special Tea - 50?\n");
    food_input(array);
}

void coffee(){
    printf("The Coffee Menu\n");
    printf("1.Hot Coffee - 50?\n");
    printf("2.Cold Coffee - 80?\n");
    food_input(array);
}

void roti_fun(int *ptr){
    int choice;
    printf("Which Roti would you like to eat\n");
    printf("1.Plan Roti - 10?\n");
    printf("2.Rumali Roti - 15?\n");
    printf("3.Tandoori Roti - 20?\n");
    printf("4.Makki Roti - 30?\n");
    printf("5.Bajra Roti - 25?\n");
    
    printf("Enter your choice\n");
    scanf("%d", &choice);
    ptr[Item++] += choice;
}

void food_input(int *ptr){
    int a;
    printf("Enter item price which you want\n");
    scanf("%d", &a);
    ptr[Item++] = a;
}

void generate_bill(){
    int total = 0;
    printf("\n****** Bill ******\n");
    for(int i = 0; i < Item; i++){
        printf("Item %d:%d?\n", i + 1, array[i]);
        total += array[i];
    }
    printf("Total: %d?\n", total);
}
#include <stdio.h>
#define MAX_ITEMS 10

int array[MAX_ITEMS];
int Item = 0;

void greeting();
void menu();
int menuInput();
void item();
void breakfast();
void lunch();
void dinner();
void fast_food();
void sweets();
void ice_cream();
void tea();
void coffee();
void food_input(int *ptr);
void roti_fun(int *ptr);
void generate_bill();

int main(){
    int x;
    greeting();
    menu();
    x = menuInput();
    item(x);
    generate_bill();
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

void item(int x){
    switch(x){
        case 1:
            breakfast();
            break;    
        case 2:
            lunch();
            break;
        case 3:
            dinner();
            break;
        case 4:
            fast_food();
            break;
        case 5:
            sweets();
            break;    
        case 6:
            ice_cream();
            break;    
        case 7:
            tea();
            break;    
        case 8:
            coffee();
            break;
            
        default:
            printf("Please select valid option");
            menuInput();
            item(x);
    }                                
} 

void breakfast(){
   printf("The Breakfast Menu\n");
   printf("1.Poha - 30?\n");
   printf("2.Bread batter - 40?\n");
   printf("3.Upma 50?\n");    
   printf("4.Paratha - 25?\n");
   printf("5.Khaman Dhokla - 55?\n");
   food_input(array);
}

void lunch(){
    printf("The Lunch Menu\n");
    printf("1.Kadai Paneer - 320?\n");
    printf("2.Matar Paneer - 240?\n");
    printf("3.Aloo Chole - 180?\n");
    printf("4.Sev Tamater - 160?\n");
    printf("5.Besan Gatte - 160?\n");
    printf("6.Daal Fry - 140?\n");
    food_input(array);
    roti_fun(array);
}

void dinner(){
    printf("The Dinner Menu\n");
    printf("1.Dal Makhani - 140?\n");
    printf("2.Bhindi Masala - 160?\n");
    printf("3.Sambar - 120?\n");
    printf("4.Malai Kofta - 230?\n");
    printf("5.Kaju Giri - 340?\n");
    printf("6.Shahi Paneer - 320?\n");
    food_input(array);
    roti_fun(array);
}

void fast_food(){
    printf("1.Pizza - 220?\n");
    printf("2.Sandwich - 80?\n");
    printf("3.Burger - 60?\n");
    printf("4.Chowmein - 55?\n");
    printf("5.French Fries - 50?\n");
    printf("6.Momos - 60?\n");
    printf("7.Manchurian - 80?\n");
    printf("8.Masala Patties - 40?\n");
    printf("9.Potato Salad - 50?\n");
    printf("10.Hot dog - 35?\n");
    food_input(array);
}

void sweets(){
    printf("The Sweets Menu\n");
    printf("1.Kaju Barfi - 520?\n");
    printf("2.Rasgulla - 260?\n");
    printf("3.Gulab Jamun - 360?\n");
    printf("4.Ras Malai - 460?\n");
    printf("5.Milk Cake - 340?\n");
    printf("6.Jalebi - 280?\n");
    food_input(array);
}

void ice_cream(){
    printf("The Ice Cream Menu\n");
    printf("1.Vanilla - 120?\n");
    printf("2.Strawberry - 80?\n");
    printf("3.Mango Tango - 70?\n");
    printf("4.Kaju Kishmish - 140?\n");
    printf("5.Choco Chips - 60?\n");
    printf("6.Kwsar Pista - 180?\n");
    food_input(array);
}

void tea(){
    printf("The Tea Menu\n");
    printf("1.Plan Tea - 20?\n");
    printf("2.Rose Tea - 30?\n");
    printf("3.Elaichi Tea - 25?\n");
    printf("4.Adrak Tea - 25?\n");
    printf("5.Choclate Tea - 40?\n");
    printf("6.Special Tea - 50?\n");
    food_input(array);
}

void coffee(){
    printf("The Coffee Menu\n");
    printf("1.Hot Coffee - 50?\n");
    printf("2.Cold Coffee - 80?\n");
    food_input(array);
}

void roti_fun(int *ptr){
    int choice;
    printf("Which Roti would you like to eat\n");
    printf("1.Plan Roti - 10?\n");
    printf("2.Rumali Roti - 15?\n");
    printf("3.Tandoori Roti - 20?\n");
    printf("4.Makki Roti - 30?\n");
    printf("5.Bajra Roti - 25?\n");
    
    printf("Enter your choice\n");
    scanf("%d", &choice);
    ptr[Item++] += choice;
}

void food_input(int *ptr){
    int a;
    printf("Enter item price which you want\n");
    scanf("%d", &a);
    ptr[Item++] = a;
}

void generate_bill(){
    int total = 0;
    printf("\n****** Bill ******\n");
    for(int i = 0; i < Item; i++){
        printf("Item %d:%d?\n", i + 1, array[i]);
        total += array[i];
    }
    printf("Total: %d?\n", total);
}

