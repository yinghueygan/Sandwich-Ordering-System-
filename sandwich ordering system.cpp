#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <windows.h>
using namespace std;

struct custom
{
  string item_code;
  string item_name;
  double item_price;
};

int main()
{
    char *l = " --------------------------------------------------------------------------------------------------------------------------------\n";
    char name[20];
    char card_no[30];
    char pin[20];
    char confirm;
    int choice1, order1 = 1, add_on=1;
    int length_of_card_no, length_of_pin;
    double pay, change;
    char repeat, order2;
    string option, ans, method, choice2;
    string code201, code202, code203, code204, code205, code206;
    int num101=0, num102=0, num103=0, num104=0; //number of order for sandwich
    int num301=0, num302=0, num303=0, num304=0; //number of order for beverages

    int add_on101=0, add_on102=0, add_on103=0, add_on104=0; //add on for sandwich
    int add_on301=0, add_on302=0, add_on303=0, add_on304=0; //add on for beverages
    double payable1, payable2, discount, free_gift;
    double total=0;

    double price101= 5.50, price102= 4.50, price103= 7.70, price104=8.50; //price for sandwich
    double price301= 2.00, price302= 4.50, price303= 3.00, price304= 5.00; //price for beverages

    double cost101=0, cost102=0, cost103=0, cost104=0;
    double cost301=0, cost302=0, cost303=0, cost304=0;

    //declaration for customade
    double customade_price=0;
    double ingredient_price;
    struct custom cust[12];
    int i=0,n=0;


welcome:
        system("cls");
     cout<<endl<<endl;
     cout<<"\t\t\t\t\t\t          __      __        __\n";
     cout<<"\t\t\t\t\t\t         /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
     cout<<"\t\t\t\t\t\t         \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
     cout<<"\t\t\t\t\t\t          \\        /|  ___/|  |  \\__(  <_> )|  Y Y  \|  ___/\n";
     cout<<"\t\t\t\t\t\t           \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
     cout<<"\t\t\t\t\t\t     _____   __    __  ____    __   _______    ___   ______   ________        \n";
     cout<<"\t\t\t\t\t\t    |     \\ | |   | | |    \\  |  | |   __  \\  |  |  |  ____| |  _____|   \n";
     cout<<"\t\t\t\t\t\t    |  \\ // | |   | | |  |\\ \\ |  | |  /__/ /  |  |  |  |___  |  |____           \n";
     cout<<"\t\t\t\t\t\t    |   Y \\ | |___| | |  | \\ \\|  | |  | \\  \\  |  |   \\___  | |  |_____          \n";
     cout<<"\t\t\t\t\t\t    |____ / |_______| |__|  \\____| | _|  \\_ \\ |__|  |______| |_______|            \n\n";
     cout<<"\t\t\t\t\t      ______       ____      ____    __  ______    __      __  ___  _____  __   __        \n";
     cout<<"\t\t\t\t\t      |  ____|    /    \\    |    \\  |  ||  __  \\  /  \\    /  \\|  | /  ___\\|  |__| |               \n";
     cout<<"\t\t\t\t\t      |  |___    /  /_\\ \\   |  |\\ \\ |  || |  \\  | \\  \\/  \\ |  |  ||  |    |       |   \n";
     cout<<"\t\t\t\t\t       \\___  |  /   ___  \\  |  | \\ \\|  || |__/  |  \\        / |  ||  |___ |  __   |       \n";
     cout<<"\t\t\t\t\t      |______| /__/    \\__\\ |__|  \\____||______/    \\__/\\__/  |__| \\_____/|__| |__|                   \n\n";

     cout<<"\t\t   "<<l<<"\t\t\t   "<<endl<<"    \t\t\t\t\t\t\t\t   Welcome to Bunrise Sandwich !!!"<<endl;
     cout<<" \t\t\t\t\t\t\t          Grab all the food you want here !!!"<<endl;
     cout<<" \t\t\t\t\t          6 types of ingredients for you to customise your own sandwich !!!"<<endl;
     cout<<endl<<" \t\t\t\t\t\t\t\t   Discount is available from: "<<endl;
     cout<<" \t\t\t\t\t\t\t\t     8 a.m to 10 a.m -- 20% "<<endl;
     cout<<" \t\t\t\t\t\t\t\t     9 p.m to 11 p.m -- 30% "<<endl<<endl;
     cout<<" \t\t\t\t\t\t\t       Purchase at least RM50.00  -- RM 5 voucher "<<endl;
     cout<<" \t\t\t\t\t\t\t       Purchase at least RM100.00 -- RM 10 voucher "<<endl<<endl;
     cout<<" \t\t\t\t\t\t\t\t        Enjoy your meal...."<<endl<<endl<<"\t\t   "<<l<<endl;


    cout<<"\t\t\t\t\t\t\t    Enter your name to continue your order: ";
    cin.getline(name,20);

eating:
    system("cls");

    cout<<"\t\t\t\t\t\t\t\t   ==========================" <<endl;
    cout<<"\t\t\t\t\t\t\t\t   |      EATING METHOD     |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   ==========================" <<endl<<endl;
    do{
     cout<<"\t\t\t\t\t\t\t\t Dear customer, "<<name<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t What option would you prefer: "<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t 1. Eat in "<<endl;
     cout<<"\t\t\t\t\t\t\t\t\t 2. Take away "<<endl<<endl;
     cout<<"\t\t\t\t\t\t\t\t Enter your option (1 or 2): ";
     cin>>option;

     if(option == "1")
        cout<<endl<<"\t\t\t\t\t\t\t\t You have chosen eat in. "<<endl;
     else if(option == "2")
        cout<<endl<<"\t\t\t\t\t\t\t\t You have chosen take away. "<<endl;
     else
     {
        cout<<endl<<"\t\t\t\t\t\t\t\t Invalid option. "<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t Choose from (1 or 2). "<<endl<<endl;
        system("pause");
        system("cls");
     }
        }while(option!="1" && option!="2");
        cout<<endl;

        cout<<endl<<endl<<"\t\t"<<l<<endl;

        do{
                cout<<endl<<"\t\t\t\t\t\t\t Enter 'B' to repeat choosing or press 'C' to continue: ";
                cin>>repeat;

                if(repeat == 'B' || repeat == 'b')
                {
                    goto eating;
                }
                else if(repeat == 'C' || repeat == 'c')
                {
                goto menu;
                }
                else
                {
                    cout<<endl<<"\t\t\t\t\t\t\t Invalid input. "<<endl;
                    Beep(300,500);
                    cout<<"\t\t\t\t\t\t\t Choose from ('B', 'b', 'C' or 'c')"<<endl<<endl;
                    system("pause");
                }
        }while(repeat!='B' && repeat!='b' && repeat!='C' && repeat!='c');

menu:
          while(add_on != 0){
         system("cls");

    do{
    cout<<"\t\t\t\t\t\t\t         _____\n";
    cout<<"\t\t\t\t\t\t\t        /     \\   ____   ____    __ __\n";
    cout<<"\t\t\t\t\t\t\t       /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
    cout<<"\t\t\t\t\t\t\t      /    Y    \\  ___/|   |   \\|  |  |\n";
    cout<<"\t\t\t\t\t\t\t      \\____|____/\\____>____|____|_____|      _____     / /   __||__    "<<endl;
    cout <<"\t\t\t\t\t\t\t\t                                    / \\/ /\\     / /  |     |     "<<endl;
    cout<<"\t\t\t\t\t\t\t\t 1. Our Sandwich                   /   \\/ /\\  _____  |_____|     "<<endl;
    cout<<"\t\t\t\t\t\t\t\t 2. Make Your Own Sandwich        /     \\/ /\\|     |_|     |     "<<endl;
    cout<<"\t\t\t\t\t\t\t\t 3. Beverages                    /       \\/ /\\ TEA |_|WATER|     "<<endl;
    cout<<"\t\t\t\t\t\t\t\t 4. Exit                        /__  _  __\\/__\\____| |_____| "<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t    Which option would you like(1,2,3 or 4): ";
    cin>>choice1;

    switch(choice1)
    {
    case 1 :

        system("cls");
    cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
    cout<<"\t\t\t\t\t\t\t\t     |       OUR SANDWICH     |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
    cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
    cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
    cout << "\t\t\t\t\t\t   | ITEM CODE |              DESCRIPTION               |     PRICE     |"<<endl;
    cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
    cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
    cout << "\t\t\t\t\t\t   |  [ 101 ]  |        Veggie Delight Sandwich         |    RM 5.50    |"<<endl;
    cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
    cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
    cout << "\t\t\t\t\t\t   |  [ 102 ]  |        Eggspresso Sandwich             |    RM 4.50    |"<<endl;
    cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
    cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
    cout << "\t\t\t\t\t\t   |  [ 103 ]  |        Roasted Chicken Sandwich        |    RM 7.70    | "<<endl;
    cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
    cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
    cout << "\t\t\t\t\t\t   |  [ 104 ]  |        Smoked Salmon Sandwich          |    RM 8.50    |"<<endl;
    cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl<<endl<<endl;


        do
        {
            cout<<endl<<" \n\t\t\t\t\t\t  From the list of sandwiches, what would you like(101, 102, 103 or 104) : ";
            cin>>order1;
        }while( order1!=101 && order1!=102 && order1!=103 && order1!=104 );

        switch(order1)
    {
        case 101:

            system("cls");

                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |       INGREDIENTS      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout<<"\t\t\t\t\t     [ 101 ]  Veggie Delight Sandwich  RM5.50"<<endl;
                cout << "\t\t\t\t\t    __________________________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    NO.   |         TYPES         |              CHOSEN INGREDIENTS               |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    1.    |      Bread / Toast    |               Whole Wheat Bread               |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    2.    |      Fish / Meat      |                    ----                       |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    3.    |      Salad            |    Lettuce, Cherry Tomato, Cucumber, Onions   | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    4.    |      Cheese           |                 Cheese Slices                 |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    5.    |      Jam              |                    ----                       | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    6.    |      Egg              |                    ----                       |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl<<endl<<endl;

                do{
                    cout<<endl<<endl<<"\t\t\t\t\t   Do you want to confirm the ingredients (Y/N) :";
                    cin>>confirm;
                if (confirm == 'Y' || confirm == 'y')
                {
                    cout<<endl<<"\t\t\t\t\t   How many sandwich would you like to order :";
                    cin>>num101;
                    add_on101 = num101 + add_on101;
                    cost101 = price101 * add_on101;
                }
                else if (confirm == 'N' || confirm == 'n')
                {
                    goto customade;
				}
                else
                {
                    cout<<endl<<"\t\t\t\t\t   Invalid option. "<<endl;
                    Beep(300,500);
                    cout<<"\t\t\t\t\t   Choose from (Y or N). "<<endl<<endl;
                    system("pause");
                    system("cls");
                }}while(confirm!='Y' && confirm!='y' && confirm!='N' && confirm!='n');
            break;

        case 102:
            system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |       INGREDIENTS      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout<<"\t\t\t\t\t     [ 102 ]  Eggspresso Sandwich  RM4.50"<<endl;
                cout << "\t\t\t\t\t    __________________________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    NO.   |         TYPES         |              CHOSEN INGREDIENTS               |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    1.    |      Bread / Toast    |              Classic White Bread              |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    2.    |      Fish / Meat      |                    ----                       |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    3.    |      Salad            |                   Lettuce                     | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    4.    |      Cheese           |                    ----                       |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    5.    |      Jam              |              Mayonnaise, Mustard              | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    6.    |      Egg              |                 Hardboiled Egg                |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl<<endl<<endl;

                do{
                    cout<<endl<<endl<<"\t\t\t\t\t   Do you want to confirm the ingredients (Y/N) :";
                    cin>>confirm;
                if (confirm == 'Y' || confirm == 'y')
                {
                    cout<<endl<<"\t\t\t\t\t   How many sandwich would you like to order :";
                    cin>>num102;
                    add_on102 = num102 + add_on102;
                    cost102 = price102 * add_on102;
                }
                else if(confirm == 'N' || confirm == 'n')
                {
                    goto customade;
				}
                else
                {
                    cout<<endl<<"\t\t\t\t\t   Invalid option. "<<endl;
                    Beep(300,500);
                    cout<<"\t\t\t\t\t   Choose from (Y or N). "<<endl<<endl;
                    system("pause");
                    system("cls");
                }}while(confirm!='Y' && confirm!='y' && confirm!='N' && confirm!='n');
            break;

        case 103:
            system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |       INGREDIENTS      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout<<"\t\t\t\t\t     [ 103 ]  Roasted Chicken Sandwich  RM4.50"<<endl;
                cout << "\t\t\t\t\t    __________________________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    NO.   |         TYPES         |              CHOSEN INGREDIENTS               |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    1.    |      Bread / Toast    |              Sunflower Seed Bread             |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    2.    |      Fish / Meat      |                Roasted Chicken                |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    3.    |      Salad            |               Lettuce, Cucumber               | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    4.    |      Cheese           |                  Cheese Slices                |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    5.    |      Jam              |                      ----                     | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    6.    |      Egg              |                      ----                     |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl<<endl<<endl;
                do{
                    cout<<endl<<endl<<"\t\t\t\t\t   Do you want to confirm the ingredients (Y/N) :";
                    cin>>confirm;
                if (confirm == 'Y' || confirm == 'y')
                {
                    cout<<endl<<"\t\t\t\t\t   How many sandwich would you like to order :";
                    cin>>num103;
                    add_on103 = num103 + add_on103;
                    cost103 = price103 * add_on103;
                }
                else if(confirm == 'N' || confirm == 'n')
                {
                    goto customade;
				}
                else
                {
                    cout<<endl<<"\t\t\t\t\t   Invalid option. "<<endl;
                    Beep(300,500);
                    cout<<"\t\t\t\t\t   Choose from (Y or N). "<<endl<<endl;
                    system("pause");
                    system("cls");
                }}while(confirm!='Y' && confirm!='y' && confirm!='N' && confirm!='n');
            break;

        case 104:
            system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |       INGREDIENTS      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout<<"\t\t\t\t\t     [ 104 ]  Smoked Salmon Sandwich  RM4.50"<<endl;
                cout << "\t\t\t\t\t    __________________________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    NO.   |         TYPES         |              CHOSEN INGREDIENTS               |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    1.    |      Bread / Toast    |               Multi Grain Bread               |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    2.    |      Fish / Meat      |                 Smoked Fish                   |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    3.    |      Salad            |            Lettuce, Cheery Tomato             | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    4.    |      Cheese           |                    ----                       |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    5.    |      Jam              |                   BBQ Sauce                   | "<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl;
                cout << "\t\t\t\t\t   |          |                       |                                               |"<<endl;
                cout << "\t\t\t\t\t   |    6.    |      Egg              |                    ----                       |"<<endl;
                cout << "\t\t\t\t\t   |__________|_______________________|_______________________________________________|"<<endl<<endl<<endl;

                do{
                    cout<<endl<<endl<<"\t\t\t\t\t   Do you want to confirm the ingredients (Y/N) :";
                    cin>>confirm;
                if (confirm == 'Y' || confirm == 'y')
                {
                    cout<<endl<<"\t\t\t\t\t   How many sandwich would you like to order :";
                    cin>>num104;
                    add_on104 = num104 + add_on104;
                    cost104 = price104 * add_on104;
                }
                else if(confirm == 'N' || confirm == 'n')
                {
                    goto customade;
				}
                else
                {
                    cout<<endl<<"\t\t\t\t\t   Invalid option. "<<endl;
                    Beep(300,500);
                    cout<<"\t\t\t\t\t   Choose from (Y or N). "<<endl<<endl;
                    system("pause");
                    system("cls");
                }}while(confirm!='Y' && confirm!='y' && confirm!='N' && confirm!='n');
            break;

        default: cout<<endl<<"\t\t\t\t\t   Please choose a valid item from our list\n";
                 }break;

customade:
    case 2:
        {
cout<<fixed<<setprecision(2);
//price for bread/toast
/*whole wheat bread*/   double price2011=1.50;
/*classic white bread*/ double price2012=1.00;
/*sunflower seed bread*/double price2013=2.00;
/*multi grain bread*/   double price2014=2.00;

        system("cls");
        cout<<endl<<"      Make Your Own Sandwich "<<endl;
        Sleep(2000);
   {

                   system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |      BREAD / TOAST      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   | ITEM CODE  |              DESCRIPTION               |     PRICE     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2011 ]  |           Whole Wheat Bread            |    RM "<<price2011<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2012 ]  |           Classic White Bread          |    RM "<<price2012<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2013 ]  |           Sunflower Seed Bread         |    RM "<<price2013<<"    | "<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2014 ]  |           Multi Grain Bread            |    RM "<<price2014<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 0000 ]  |                  ----                  |      ----     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl<<endl<<endl;
                cout<<endl;

                do{
                do{
                    cout<<endl<<"\t\t\t\t\t\t   From the list of Bread/Toast, what would you like(2011, 2012, 2013 or 2014): ";
                    cin>>code201;
                }while(code201!="2011" && code201!="2012" && code201!="2013" && code201!="2014"&&code201!="0000");

                //calculate price
                if(code201!="0000")
                {
                if (code201=="2011")
                {
                    customade_price=customade_price+price2011;
                    cust[i].item_code="2011";
                    cust[i].item_name="Whole White Bread";
                    cust[i].item_price=price2011;
                }
                else if (code201=="2012")
                {
                    customade_price=customade_price+price2012;
                    cust[i].item_code="2012";
                    cust[i].item_name="Classic White Bread";
                    cust[i].item_price=price2012;
                }
                else if (code201=="2013")
                {
                    customade_price=customade_price+price2013;
                    cust[i].item_code="2013";
                    cust[i].item_name="Sunflower Seed Bread";
                    cust[i].item_price=price2013;
                }
                else if (code201=="2014")
                {
                    customade_price=customade_price+price2014;
                    cust[i].item_code="2014";
                    cust[i].item_name="Multi Grain Bread";
                    cust[i].item_price=price2014;
                }
                i++;
                n++;
                }
                else
                {
                    customade_price=customade_price;
                }

                cout<<endl<<"\t\t\t\t\t\t   Your purchase for now : RM "<<customade_price<<endl<<endl;

                cout<<"\t\t\t\t\t\t   Add more bread/toast(Y/N): ";
                cin>>ans;
                    while (ans!="Y"&&ans!="y"&&ans!="N"&&ans!="n")
                    {
                        Beep(300,500);
                        cout<<endl<<"\t\t\t\t\t\t   Please enter a valid answer. ";
                        cin>>ans;
                    }
                }while (ans=="y" || ans=="Y");

//price for fish/meat
/*roasted chicken*/ double price2021=3;
/*ham            */ double price2022=2;
/*bacon          */ double price2023=2;
/*smoked fish    */ double price2024=4;

                   system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |       FISH / MEAT      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   | ITEM CODE  |              DESCRIPTION               |     PRICE     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2021 ]  |             Roasted Chicken            |    RM "<<price2021<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2022 ]  |             Ham                        |    RM "<<price2022<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2023 ]  |             Bacon                      |    RM "<<price2023<<"    | "<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2024 ]  |             Smoked Fish                |    RM "<<price2024<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 0000 ]  |                  ----                  |      ----     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl<<endl<<endl;
                cout<<endl;

                do{
                do{
                    cout<<endl<<"\t\t\t\t\t\t   From the list of Fish/Meat, what would you like(2021, 2022, 2023 or 2024): ";
                    cin>>code202;
                }while(code202!="2021" && code202!="2022" && code202!="2023" && code202!="2024" && code202!="0000");

                //calculate price
                if(code202!="0000")
                {
                if (code202=="2021")
                {
                    customade_price=customade_price+price2021;
                    cust[i].item_code="2021";
                    cust[i].item_name="Roasted Chicken";
                    cust[i].item_price=price2021;
                }
                else if (code202=="2022")
                {
                    customade_price=customade_price+price2022;
                    cust[i].item_code="2022";
                    cust[i].item_name="Ham";
                    cust[i].item_price=price2022;
                }
                else if (code202=="2023")
                {
                    customade_price=customade_price+price2023;
                    cust[i].item_code="2023";
                    cust[i].item_name="Bacon";
                    cust[i].item_price=price2023;
                }
                else if (code202=="2024")
                {
                    customade_price=customade_price+price2024;
                    cust[i].item_code="2024";
                    cust[i].item_name="Smoked Fish";
                    cust[i].item_price=price2024;
                }
                i++;
                n++;
                }
                else
                {
                    customade_price=customade_price;
                }

                cout<<endl<<"\t\t\t\t\t\t   Your purchase for now : RM "<<customade_price<<endl<<endl;

                cout<<"\t\t\t\t\t\t   Add more fish/meat(Y/N): ";
                cin>>ans;
                    while (ans!="Y"&&ans!="y"&&ans!="N"&&ans!="n")
                    {
                        Beep(300,500);
                        cout<<endl<<"\t\t\t\t\t\t   Please enter a valid answer. ";
                        cin>>ans;
                    }
                }while (ans=="y" || ans=="Y");

//price for salad
/*lettuce  */ double price2031=0.7;
/*tomato   */ double price2032=0.8;
/*cucumber */ double price2033=0.5;
/*onion    */ double price2034=0.5;

                    system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |          SALAD         |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   | ITEM CODE  |              DESCRIPTION               |     PRICE     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2031 ]  |                Lettuce                 |    RM "<<price2031<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2032 ]  |                Tomato                  |    RM "<<price2032<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2033 ]  |                Cucumber                |    RM "<<price2033<<"    | "<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2034 ]  |                Onion                   |    RM "<<price2034<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 0000 ]  |                  ----                  |      ----     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl<<endl<<endl;
                cout<<endl;

                do{
                do{
                    cout<<endl<<"\t\t\t\t\t\t   From the list of Salad, what would you like(2031, 2032, 2033 or 2034): ";
                    cin>>code203;
                }while(code203!="2031" && code203!="2032" && code203!="2033" && code203!="2034" && code203!="0000");

                //calculate price
                if(code203!="0000")
                {
                if (code203=="2031")
                {
                    customade_price=customade_price+price2031;
                    cust[i].item_code="2031";
                    cust[i].item_name="Lettuce";
                    cust[i].item_price=price2031;
                }
                else if (code203=="2032")
                {
                    customade_price=customade_price+price2032;
                    cust[i].item_code="2032";
                    cust[i].item_name="Tomato";
                    cust[i].item_price=price2032;
                }
                else if (code203=="2033")
                {
                    customade_price=customade_price+price2033;
                    cust[i].item_code="2033";
                    cust[i].item_name="Cucumber";
                    cust[i].item_price=price2033;
                }
                else if (code203=="2034")
                {
                    customade_price=customade_price+price2034;
                    cust[i].item_code="2034";
                    cust[i].item_name="Onion";
                    cust[i].item_price=price2034;
                }
                i++;
                n++;
                }
                else
                {
                    customade_price=customade_price;
                }

                cout<<endl<<"\t\t\t\t\t\t   Your purchase for now : RM "<<customade_price<<endl<<endl;

                cout<<"\t\t\t\t\t\t   Add more salad(Y/N): ";
                cin>>ans;
                    while (ans!="Y"&&ans!="y"&&ans!="N"&&ans!="n")
                    {
                        Beep(300,500);
                        cout<<endl<<"\t\t\t\t\t\t   Please enter a valid answer. ";
                        cin>>ans;
                    }
                }while (ans=="y"|| ans=="Y");

//price for cheese
/*cheese slices  */ double price2041=1.5;
/*mozzerella     */ double price2042=2;
/*cream cheese   */ double price2043=1.8;
/*swiss          */ double price2044=2;

                    system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |         CHEESE         |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   | ITEM CODE  |              DESCRIPTION               |     PRICE     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2041 ]  |              Cheese Slices             |    RM "<<price2041<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2042 ]  |              Mozzeralla                |    RM "<<price2042<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2043 ]  |              Cream Cheese              |    RM "<<price2043<<"    | "<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2044 ]  |              Swiss                     |    RM "<<price2044<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 0000 ]  |                  ----                  |      ----     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl<<endl<<endl;
                cout<<endl;

                do{
                do{
                    cout<<endl<<"\t\t\t\t\t\t   From the list of Cheese, what would you like(2041, 2042, 2043 or 2044): ";
                    cin>>code204;
                }while(code204!="2041" && code204!="2042" && code204!="2043" && code204!="2044" && code204!="0000");

                //calculate price
                if(code204!="0000")
                {
                if (code204=="2041")
                {
                    customade_price=customade_price+price2041;
                    cust[i].item_code="2041";
                    cust[i].item_name="Cheese Slices";
                    cust[i].item_price=price2041;
                }
                else if (code204=="2042")
                {
                    customade_price=customade_price+price2042;
                    cust[i].item_code="2042";
                    cust[i].item_name="Mozzerella";
                    cust[i].item_price=price2042;
                }
                else if (code204=="2043")
                {
                    customade_price=customade_price+price2043;
                    cust[i].item_code="2043";
                    cust[i].item_name="Cream Cheese";
                    cust[i].item_price=price2043;
                }
                else if (code204=="2044")
                {
                    customade_price=customade_price+price2044;
                    cust[i].item_code="2044";
                    cust[i].item_name="Swiss";
                    cust[i].item_price=price2044;
                }
                i++;
                n++;
                }
                else
                {
                    customade_price=customade_price;
                }

                cout<<endl<<"\t\t\t\t\t\t   Your purchase for now : RM "<<customade_price<<endl<<endl;

                cout<<"\t\t\t\t\t\t   Add more cheese(Y/N): ";
                cin>>ans;
                    while (ans!="Y"&&ans!="y"&&ans!="N"&&ans!="n")
                    {
                        Beep(300,500);
                        cout<<endl<<"\t\t\t\t\t\t   Please enter a valid answer. ";
                        cin>>ans;
                    }
                }while (ans=="y" || ans=="Y");

//price for jam/sauce
/*mayonnaise  */ double price2051=0.8;
/*mustard     */ double price2052=1;
/*bbq sauce   */ double price2053=1;
/*tuna        */ double price2054=1.5;

                    system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |       JAM / SAUCE      |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   | ITEM CODE  |              DESCRIPTION               |     PRICE     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2051 ]  |               Mayonnaise               |    RM "<<price2051<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2052 ]  |               Mustard                  |    RM "<<price2052<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2053 ]  |               BBQ Sauce                |    RM "<<price2053<<"    | "<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2054 ]  |               Tuna                     |    RM "<<price2054<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 0000 ]  |                  ----                  |      ----     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl<<endl<<endl;
                cout<<endl;

                do{
                do{
                    cout<<endl<<"\t\t\t\t\t\t   From the list of Jam, what would you like(2051, 2052, 2053 or 2054): ";
                    cin>>code205;
                }while(code205!="2051" && code205!="2052" && code205!="2053" && code205!="2054" && code205!="0000");

                //calculate price
                if(code205!="0000")
                {
                if (code205=="2051")
                {
                    customade_price=customade_price+price2051;
                    cust[i].item_code="2051";
                    cust[i].item_name="Mayonnaise";
                    cust[i].item_price=price2051;
                }
                else if (code205=="2052")
                {
                    customade_price=customade_price+price2052;
                    cust[i].item_code="2052";
                    cust[i].item_name="Mustard";
                    cust[i].item_price=price2052;
                }
                else if (code205=="2053")
                {
                    customade_price=customade_price+price2053;
                    cust[i].item_code="2053";
                    cust[i].item_name="BBQ Sauce";
                    cust[i].item_price=price2053;
                }
                else if (code205=="2054")
                {
                    customade_price=customade_price+price2054;
                    cust[i].item_code="2054";
                    cust[i].item_name="Tuna";
                    cust[i].item_price=price2054;
                }
                i++;
                n++;
                }
                else
                {
                    customade_price=customade_price;
                }

                cout<<endl<<"\t\t\t\t\t\t   Your purchase for now : RM "<<customade_price<<endl<<endl;

                cout<<"\t\t\t\t\t\t   Add more jam/sauce(Y/N): ";
                cin>>ans;
                    while (ans!="Y"&&ans!="y"&&ans!="N"&&ans!="n")
                    {
                        Beep(300,500);
                        cout<<endl<<"\t\t\t\t\t\t   Please enter a valid answer. ";
                        cin>>ans;
                    }
                }while (ans=="y" || ans=="Y");


//price for egg
/*hardboiled egg  */ double price2061=1;
/*sliced egg      */ double price2062=0.7;
/*omelets egg     */ double price2063=1.2;

                    system("cls");
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
                cout<<"\t\t\t\t\t\t\t\t     |           EGG          |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
                cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   | ITEM CODE  |              DESCRIPTION               |     PRICE     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2061 ]  |             Hardboiled Egg             |    RM "<<price2061<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2062 ]  |             Sliced Egg                 |    RM "<<price2062<<"    |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 2063 ]  |             Omelets Egg                |    RM "<<price2063<<"    | "<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;
                cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
                cout << "\t\t\t\t\t\t   |  [ 0000 ]  |                  ----                  |      ----     |"<<endl;
                cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl<<endl<<endl;
                cout<<endl;

                cout<<endl;

                do{
                do{
                    cout<<endl<<"\t\t\t\t\t\t   From the list of Egg, what would you like(2061, 2062, 2063): ";
                    cin>>code206;
                }while(code206!="2061" && code206!="2062" && code206!="2063" && code206!="0000");

                //calculate price
                if(code206!="0000")
                {
                if (code206=="2061")
                {
                    customade_price=customade_price+price2061;
                    cust[i].item_code="2061";
                    cust[i].item_name="Hardboiled Egg";
                    cust[i].item_price=price2061;
                }
                else if (code206=="2062")
                {
                    customade_price=customade_price+price2062;
                    cust[i].item_code="2062";
                    cust[i].item_name="Sliced Egg";
                    cust[i].item_price=price2062;
                }
                else if (code206=="2063")
                {
                    customade_price=customade_price+price2063;
                    cust[i].item_code="2063";
                    cust[i].item_name="Omelets Egg";
                    cust[i].item_price=price2063;
                }
                i++;
                n++;
                }
                else
                {
                    customade_price=customade_price;
                }

                cout<<endl<<"\t\t\t\t\t\t   Your purchase for now : RM "<<customade_price<<endl<<endl;

                cout<<"\t\t\t\t\t\t   Add more egg(Y/N): ";
                cin>>ans;
                    while (ans!="Y"&&ans!="y"&&ans!="N"&&ans!="n")
                    {
                        Beep(300,500);
                        cout<<endl<<"\t\t\t\t\t\t   Please enter a valid answer. ";
                        cin>>ans;
                    }
                }while (ans=="y" || ans=="Y");

        system("cls");

        //list ingredient
        cout<<"\t\t\t\t\t\t\t       ===========================================" <<endl;
        cout<<"\t\t\t\t\t\t\t       |      YOUR SANDWICH WITH INGREDIENTS     |"<<endl;
        cout<<"\t\t\t\t\t\t\t       ===========================================" <<endl<<endl;
        cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
        cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
        cout << "\t\t\t\t\t\t     "<<setw(7)<<"CODE"<<setw(27)<<"INGREDIENTS"<<setw(30)<<"PRICE"<<endl;
        cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;

        for(i=0; i<n; i++)
        {
            //printing values
            cout << "\t\t\t\t\t\t   |            |                                        |               |"<<endl;
            cout << "\t\t\t\t\t\t     "<<setw(7)<<cust[i].item_code<<setw(30)<<cust[i].item_name<<setw(24)<<"RM "<<cust[i].item_price<<endl;
            cout << "\t\t\t\t\t\t   |____________|________________________________________|_______________|"<<endl;

        }
        cout<<endl<<endl;
        cout<<"\t\t"<<l<<endl;
        cout<<"\t\t\t\t\t\t          Total Price: RM "<<customade_price;

   }break;

    }
   case 3 :
        cout<<" beverages "<<endl;

        system("cls");
        cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t     |        BEVERAGES       |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
        cout << "\t\t\t\t\t\t    ____________________________________________________________________"<<endl;
        cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
        cout << "\t\t\t\t\t\t   | ITEM CODE |              DESCRIPTION               |     PRICE     |"<<endl;
        cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
        cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
        cout << "\t\t\t\t\t\t   |  [ 301 ]  |              Mineral Water             |    RM 2.00    |"<<endl;
        cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
        cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
        cout << "\t\t\t\t\t\t   |  [ 302 ]  |              Americano                 |    RM 4.50    |"<<endl;
        cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
        cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
        cout << "\t\t\t\t\t\t   |  [ 303 ]  |              Hot Tea                   |    RM 3.00    | "<<endl;
        cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl;
        cout << "\t\t\t\t\t\t   |           |                                        |               |"<<endl;
        cout << "\t\t\t\t\t\t   |  [ 304 ]  |              Latte                     |    RM 5.00    |"<<endl;
        cout << "\t\t\t\t\t\t   |___________|________________________________________|_______________|"<<endl<<endl<<endl;
        do
        {
            cout<<" \n\t\t\t\t\t\t   From the list of beverages, what would you like(301, 302, 303 or 304) : ";
            cin>>order1;
        }while( order1!=301 && order1!=302 && order1!=303 && order1!=304 );
        switch(order1)
   {
        case 301:
                 cout<<endl<<" \t\t\t\t\t\t   How many Mineral Water would you like to order : ";
                 cin>>num301;
                 add_on301 = num301 + add_on301;
                 cost301 = price301 * add_on301;
                 break;
        case 302:
                 cout<<endl<<" \t\t\t\t\t\t   How many Americano would you like to order : ";
                 cin>>num302;
                 add_on302 = num302 + add_on302;
                 cost302 = price302 * add_on302;
                 break;
        case 303:
                 cout<<endl<<" \t\t\t\t\t\t   How many Hot Tea would you like to order : ";
                 cin>>num303;
                 add_on303 = num303 + add_on303;
                 cost303 = price303 * add_on303;
                 break;
        case 304:
                 cout<<endl<<" \t\t\t\t\t\t   How many Latte would you like to order : ";
                 cin>>num304;
                 add_on304 = num304 + add_on304;
                 cost304 = price304 * add_on304;
                 break;
                 default: cout<<endl<<" \t\t\t\t\t\t   Please choose a valid item from our list\n";
   }break;

   case 4 :
        system("cls");
        cout<<endl<<" \t\t\t\t\t\t   Thank you for coming......";
        cout<<endl<<" \t\t\t\t\t\t   Please come again......"<<endl;
        return 0;
        break;

    default:
        Beep(300,500);
        cout<<endl<<"\t\t\t\t\t\t\t\t Invalid Input. "<<endl;
        cout<<"\t\t\t\t\t\t\t\t Choose from (1,2,3 or 4). "<<endl<<endl;
        system("pause");
        system("cls");
        }
    }while(choice1!=1 && choice1!=2 && choice1!=3 && choice1!=4);

     cout<<endl<<endl<<endl<<endl<<"\t";
    system("pause");
    system("cls");


        cout<<"\t\t\t\t\t\t\t\t     ======================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t     |       ADD ON       |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t     ======================" <<endl<<endl;
    do
    {
        cout<<endl<<"\t\t\t\t\t\t\t     Do you want to add on? [0] no [1] yes : ";
        cin >> add_on;
   } while ( add_on != 0 && add_on != 1 );}

    system("cls");
    time_t now = time(0);

    tm *ltm = localtime(&now);

   cout<<"\n\t\t\tCustomer : "<<name<<"\t\t\t     TRANSACTION";
   cout <<"\t\t\t\t\t"<< ltm->tm_mday<<"/"<< 1 + ltm->tm_mon<<"/"<< 1900 + ltm->tm_year<<"\t";
   cout <<ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   cout<<"\t\t"<<l;
   cout<<fixed<<showpoint;
   cout<<"\t\t  You have ordered:"<<endl;
   cout<<endl<<endl;
   cout<<"\t\t  ITEM CODE\t\tITEM\t\t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
   cout<<endl<<"\t\t*Our Sandwich*"<<endl;

   if (add_on101 != 0)
    {
        cout<<"\t\t  [101] \tVeggie Delight Sandwich \t\t\t   "<<setprecision(2)<<add_on101<<"\t\t\t  RM "<<setprecision(2)<<price101<<"\t\t  RM "<<setprecision(2)<<cost101<<"\n";
   }
   if (add_on102 != 0)
    {
        cout<<"\t\t  [102] \tEggspresso Sandwich \t\t\t\t   "<<setprecision(2)<<add_on102<<"\t\t\t  RM "<<setprecision(2)<<price102<<"\t\t  RM "<<setprecision(2)<<cost102<<"\n";
   }
   if (add_on103 != 0)
    {
        cout<<"\t\t  [103] \tRoasted Chicken Sandwich \t\t\t   "<<setprecision(2)<<add_on103<<"\t\t\t  RM "<<setprecision(2)<<price103<<"\t\t  RM "<<setprecision(2)<<cost103<<"\n";
   }
   if (add_on104 != 0)
    {
        cout<<"\t\t  [104] \tSmoked Salmon Sandwich \t\t\t\t   "<<setprecision(2)<<add_on104<<"\t\t\t  RM "<<setprecision(2)<<price104<<"\t\t  RM "<<setprecision(2)<<cost104<<"\n";
   }
   if (add_on301 != 0)
    {
        cout<<"\t\t  [301] \tMineral Water \t\t\t\t\t   "<<setprecision(2)<<add_on301<<"\t\t\t  RM "<<setprecision(2)<<price301<<"\t\t  RM "<<setprecision(2)<<cost301<<"\n";
   }
   if (add_on302 != 0)
   {
       cout<<"\t\t  [302] \tAmericano \t\t\t\t\t   "<<setprecision(2)<<add_on302<<"\t\t\t  RM "<<setprecision(2)<<price302<<"\t\t  RM "<<setprecision(2)<<cost302<<"\n";
   }
   if (add_on303 != 0)
   {
       cout<<"\t\t  [303] \tHot Tea \t\t\t\t\t   "<<setprecision(2)<<add_on303<<"\t\t\t  RM "<<setprecision(2)<<price303<<"\t\t  RM "<<setprecision(2)<<cost303<<"\n";
   }
   if (add_on304 != 0)
   {
        cout<<"\t\t  [304] \tLatte \t\t\t\t\t\t   "<<setprecision(2)<<add_on304<<"\t\t\t  RM "<<setprecision(2)<<price304<<"\t\t  RM "<<setprecision(2)<<cost304<<"\n";
   }

   if (customade_price!=0)
   {
       cout<<endl<<endl<<"\t\t*Customade Sandwich*"<<endl;
       cout<<setprecision(2);

       for(i=0; i<n; i++)
        {
		cout<<"\t\t"<<setw(2)<<"  ["<<cust[i].item_code<<"]"<<setw(28)<<cust[i].item_name<<setw(57)<<"RM "<<cust[i].item_price<<setw(13)<<"\t\t  RM "<<cust[i].item_price<<endl;
        }
        cout<<endl;
   }

   cout<<"\t\t"<<l;
   total = total + cost101 + cost102 + cost103 + cost104 + cost301 +cost302 + cost303 +cost304 + customade_price;

   if((ltm->tm_hour>=8)&&(ltm->tm_hour<=10))
   {
       discount = 20/100;
       payable1 = total*(1-discount);
   }
   else if ((ltm->tm_hour>=21)&&(ltm->tm_hour<=23))
   {
       discount = 30/100;
       payable1 = total*(1-discount);
   }
   else
   {
       discount=0;
    payable1 = total;
   }


    cout<<fixed<<showpoint;
    cout<<endl<<"\t\t\tTotal                          : RM"<<setprecision(2)<<total<<endl;
    cout<<"\t\t\tDiscount                       : "<<noshowpoint<<setprecision(0)<<discount*100<<"%"<<endl;
    cout<<"\t\t\tPayable after discount         : RM"<<showpoint<<setprecision(2)<<payable1<<endl;

    if( total >= 50 && total <= 99 )
    {
        cout<<"\t\t\tFree Gift                      : RM 5.00 Voucher"<<endl;
        free_gift = 5;
        payable2 = payable1 - 5;
        cout<<"\t\t\tPayable after giving free gift : RM"<<setprecision(2)<<payable2<<endl<<endl<<"\t\t"<<l<<endl<<endl;
    }
    else if ( total >= 100 )
    {
        cout<<"\t\t\tFree Gift                      : RM 10.00 Voucher"<<endl;
        free_gift = 10;
        payable2 = payable1 - 10;
        cout<<"\t\t\tPayable after giving free gift : RM"<<setprecision(2)<<payable2<<endl<<"\t\t"<<l<<endl<<endl;
    }
    else
    {
        cout<<"\t\t\tFree Gift                      : RM 0"<<endl;
        free_gift = 0;
        payable2 = payable1;
        cout<<"\t\t\tPayable after giving free gift : RM"<<setprecision(2)<<payable2<<endl<<endl<<"\t\t"<<l<<endl<<endl;
    }

    do{
    cout<<endl<<" \t\t\tDo you confirm your order?"<<endl;
    cout<<" \t\t\tEnter 'Y' to proceed."<<endl;
    cout<<" \t\t\tEnter 'C' to cancel order."<<endl<<endl<<"\t";
    cout<<" \t\t\tYour choice: ";
    cin>>order2;

    if( order2 == 'y' || order2 == 'Y' )
        system("cls");
    else if ( order2 == 'c' || order2 == 'C' )
    {
        system("cls");
        cout<<endl<<" \t\t\t\t\t\t   Thank You for coming...."<<endl;
        cout<<" \t\t\t\t\t\t   Please come again...."<<endl;
        return 0;
    }
    else
    {
        cout<<endl<<" \t\t\tInvalid choice. "<<endl;
        Beep(300,500);
        cout<<endl<<" \t\t\tChoose from ( 'y','Y','c','C','m' and 'M' ) : "<<endl;
    }}while( order2!='y' && order2!='Y' && order2!='c' && order2!='C' );

        cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t     |      PAYMENT METHOD     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t     ==========================" <<endl<<endl;
        do{
        cout<<"\t\t\t\t\t\t\t\t     1. Cash "<<endl;
        cout<<"\t\t\t\t\t\t\t\t     2. Credit "<<endl;
        cout<<"\t\t\t\t\t\t\t\t     Select method of payment: ";
        cin>>method;

   if( method == "1" )
   {
        system("cls");
        cout<<"\t\t\t\t\t\t\t\t     ========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t     |      PAY BY CASH     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t     ========================" <<endl;
        cout<<"\n\t\t\t\t\t\t\t\t     Total of your order is : "<<setprecision(2)<<payable2<<endl;
        cout<<"\n\t\t\t\t\t\t\t\t     Enter Paying Cash (RM) : ";
        cin >> pay;
        while( pay < payable2)
        {
            cout<<endl<<"\n\t\t\t\t\t\t\t\t     The cash is not enough.Please try again."<<endl<<endl;
            Beep(300,500);
            cout<<"\n\t\t\t\t\t\t\t\t     Enter Paying Cash (RM) : ";
            cin>>pay;
        }
        cout<<fixed<<showpoint;
        change = pay - payable2;
        cout<<endl<<"\t\t\t\t\t\t\t\t     Thank You. Your change is : "<<setprecision(2)<<change<<"\n\n\n\n\t\t";
   }
   else if( method == "2" )
   {
        system("cls");
        cout<<"\t\t\t\t\t\t\t\t        ========================" <<endl;
        cout<<"\t\t\t\t\t\t\t\t        |      PAY BY CARD     |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t        ========================" <<endl;
        do{
        cout<<endl<<"\t\t\t\t\t\t\t        Enter your card no (16 digit): ";
        cin>> card_no;
        length_of_card_no = strlen(card_no);
        if(length_of_card_no !=16 )
            {
            cout<<endl<<"\t\t\t\t\t\t\t        Invalid input, card number must have 16 digits."<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t        Please try again."<<endl<<endl<<"\t\t"<<l<<endl;
            }
        }while(length_of_card_no !=16 );

        do
        {
        cout<<endl<<"\t\t\t\t\t\t\t        Enter your card pin (3 digit) : ";
        cin>>pin;
        length_of_pin=strlen(pin);
        if(length_of_pin!=3)
            {
            cout<<endl<<"\t\t\t\t\t\t\t        Invalid input, PIN must have 3 digits."<<endl;
            Beep(300,500);
            cout<<"\t\t\t\t\t\t\t        Please try again."<<endl<<endl<<"\t\t"<<l<<endl;
            }
        }while(length_of_pin!=3);

        cout<<endl<<"\t\t\t\t\t\t\t        Transaction is being processed...."<<endl;
        cout<<"\t\t\t\t\t\t\t        Transaction is completed."<<endl;
        cout<<"\t\t\t\t\t\t\t        Thank you."<<endl;
    }
    else
   {
    cout<<endl<<endl<<"\t\t\t\t\t\t\t\t     Invalid Input"<<endl;
    Beep(300,500);
    cout<<"\t\t\t\t\t\t\t\t     Choose from (1 or 2)."<<endl<<endl;
    }}while(method!="1" && method!="2");

    cout<<endl<<endl<<endl<<endl<<"\t\t"<<l<<endl;
    do{
    cout<<"\t\t\t\t\t\t\t        1. View Receipt "<<endl;
    cout<<"\t\t\t\t\t\t\t        2. Exit "<<endl;
    cout<<"\t\t\t\t\t\t\t        Your choice : ";
    cin>>choice2;

    if( choice2 == "1" )
    {
     cout<<"receipt"<<endl;
     system("cls");
     cout<<"\t\t\t\t\t\t\t\t            ====================" <<endl;
     cout<<"\t\t\t\t\t\t\t\t            |      RECEIPT     |"<<endl;
     cout<<"\t\t\t\t\t\t\t\t            ====================" <<endl;
     cout<<"\t\t\t\t\t\t\t      ___________________________________________________"<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t                            RECEIPT                      "<<endl;
     cout<<"\t\t\t\t\t\t\t      |            SANDWICH ORDERING SYSTEM             |"<<endl;
     cout<<"\t\t\t\t\t\t\t                         OPENING HOURS:                  "<<endl;
     cout<<"\t\t\t\t\t\t\t      |                EVERYDAY : 24 HRS                |"<<endl;
     cout<<"\t\t\t\t\t\t\t         _____________________________________________   "<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t            Total Price......................RM "<<setprecision(2)<<total<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t            Discount........................."<<noshowpoint<<setprecision(0)<<discount<<" %"<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t            Payable After Discount...........RM "<<showpoint<<setprecision(2)<<payable1<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t            Free Gift........................RM "<<setprecision(2)<<free_gift<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t            Payable After Giving Free Gift...RM "<<setprecision(2)<<payable2<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 |"<<endl;
     cout<<"\t\t\t\t\t\t\t            Final Total......................RM "<<setprecision(2)<<payable2<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t         _____________________________________________    "<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t                                                          "<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t               Thank you and please come again.           "<<endl;
     cout<<"\t\t\t\t\t\t\t      | The best services and food are waiting for you. | "<<endl;
     cout<<"\t\t\t\t\t\t\t                      Enjoy your meal!                 "<<endl;
     cout<<"\t\t\t\t\t\t\t      |                                                 | "<<endl;
     cout<<"\t\t\t\t\t\t\t                                                          "<<endl;
     cout<<"\t\t\t\t\t\t\t      |_________________________________________________|"<<endl;

    }
    else if ( choice2 == "2" )
    {
    system("cls");
    cout<<" \t\t\t\t\t\t   Thank You for coming...."<<endl;
    cout<<" \t\t\t\t\t\t   Please come again...."<<endl;
    return 0;
    }
    else
    {
        cout<<endl<<"\t\t\t\t\t\t\t\t        Invalid Input."<<endl;
        Beep(300,500);
        cout<<"\t\t\t\t\t\t\t\t        Choose from (1,2 or 3) : "<<endl<<endl;
    }}while( choice2!="1" && choice2!="2" );

    cout<<"\n";
    system("pause");
    system("cls");
    cout<<"\t\t\t\t\t\t\t     ====================================" <<endl;
    cout<<"\t\t\t\t\t\t\t     |      ORDER (viewed by workers)    |"<<endl;
    cout<<"\t\t\t\t\t\t\t     ====================================" <<endl<<endl;

    cout<<"\t\t"<<l<<endl;
    cout <<"\t\t  Customer : "<<name<<"\t\t\t\t\t\t\t\t\t\t\t"<< ltm->tm_mday<<"/"<< 1 + ltm->tm_mon<<"/"<< 1900 + ltm->tm_year<<"\t";
    cout <<ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    cout<<"\t\t"<<l<<endl;
    cout<<"\t\t Eating Method: "<<option<<"\t\t\t\t\t\t\t\t\t      1 - Eat In | 2 - Take Away"<<endl;
    cout<<endl<<"\t\t You have ordered:\n";
    cout<<"\t\t ITEM CODE\t\tITEM\t\t\t\t\tQUANTITY\t\tUNIT PRICE\t     AMOUNT OF SALE\n";
    cout<<endl<<"\t\t*Our Sandwich*"<<endl;
    cout<<fixed<<showpoint;

   if (add_on101 != 0)
    {
        cout<<"\t\t  [101] \tVeggie Delight Sandwich \t\t\t   "<<setprecision(2)<<add_on101<<"\t\t\t  RM "<<setprecision(2)<<price101<<"\t\t  RM "<<setprecision(2)<<cost101<<"\n";
   }
   if (add_on102 != 0)
    {
        cout<<"\t\t  [102] \tEggspresso Sandwich \t\t\t\t   "<<setprecision(2)<<add_on102<<"\t\t\t  RM "<<setprecision(2)<<price102<<"\t\t  RM "<<setprecision(2)<<cost102<<"\n";
   }
   if (add_on103 != 0)
    {
        cout<<"\t\t  [103] \tRoasted Chicken Sandwich \t\t\t   "<<setprecision(2)<<add_on103<<"\t\t\t  RM "<<setprecision(2)<<price103<<"\t\t  RM "<<setprecision(2)<<cost103<<"\n";
   }
   if (add_on104 != 0)
    {
        cout<<"\t\t  [104] \tSmoked Salmon Sandwich \t\t\t\t   "<<setprecision(2)<<add_on104<<"\t\t\t  RM "<<setprecision(2)<<price104<<"\t\t  RM "<<setprecision(2)<<cost104<<"\n";
   }
   if (add_on301 != 0)
    {
        cout<<"\t\t  [301] \tMineral Water \t\t\t\t\t   "<<setprecision(2)<<add_on301<<"\t\t\t  RM "<<setprecision(2)<<price301<<"\t\t  RM "<<setprecision(2)<<cost301<<"\n";
   }
   if (add_on302 != 0)
   {
       cout<<"\t\t  [302] \tAmericano \t\t\t\t\t   "<<setprecision(2)<<add_on302<<"\t\t\t  RM "<<setprecision(2)<<price302<<"\t\t  RM "<<setprecision(2)<<cost302<<"\n";
   }
   if (add_on303 != 0)
   {
       cout<<"\t\t  [303] \tHot Tea \t\t\t\t\t   "<<setprecision(2)<<add_on303<<"\t\t\t  RM "<<setprecision(2)<<price303<<"\t\t  RM "<<setprecision(2)<<cost303<<"\n";
   }
   if (add_on304 != 0)
   {
        cout<<"\t\t  [304] \tLatte \t\t\t\t\t\t   "<<setprecision(2)<<add_on304<<"\t\t\t  RM "<<setprecision(2)<<price304<<"\t\t  RM "<<setprecision(2)<<cost304<<"\n";
   }
   if (customade_price!=0)
   {
       cout<<endl<<endl<<"\t\t*Customade Sandwich*"<<endl;
       cout<<setprecision(2);

        for(i=0; i<n; i++)
        {
		cout<<"\t\t"<<setw(2)<<"  ["<<cust[i].item_code<<"]"<<setw(28)<<cust[i].item_name<<setw(57)<<"RM "<<cust[i].item_price<<setw(13)<<"\t\t  RM "<<cust[i].item_price<<endl;
        }
        cout<<endl;
   }

   cout<<"\t\t"<<l<<endl;

return 0;
}
