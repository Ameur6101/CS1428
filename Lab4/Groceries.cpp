//TO-DO: Ameur Moujani
//TO-DO: 9/28/2023
//CS1428 Lab
//Lab 4
//Description: this program will caculate the grocery bill
//    based on user input

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

int main()
{
    char choice;  //user's choice
    float weight,
        total_price;
    char Veggie_Choice;
    char Fruit_Choice;
    char Chips_Choice;
    float Pounds_Onions;
    float Pounds_Tomatoes;
    float Pounds_Potatoes;
    float Pounds_Grapes;
    float Pounds_Apples;
    float Pounds_Bananas;
    char Wavy;
    char Lays;
    char Onion_Rings;

    // Display greeting:
    cout << "Welcome to the Grocery Store!\n";

    // Get user input:
    cout << "Enter the item you wish to purchase: " << endl;
    cout << " V: Veggies \n F: Fruits \n C: Chips" << endl;
    cin >> choice;

    // TODO: Use a switch statement to evaluate the user's choice
    // Handle error checking where appropriate

    switch(choice)
    {
        case 'V':
        case 'v':
            cout<<"You picked Veggies! Do you want O: Onions\n T: Tomatoes\n P: Potatoes\n"<<endl;
            cin >> Veggie_Choice;
            switch(Veggie_Choice)
            {
                case'O':
                case'o':
                    cout<<"You picked Onions! How many pounds do you want?"<<endl;
                    cin>>Pounds_Onions;
                    Pounds_Onions*=0.79;
                    cout<<"Your total is: $";
                    cout<< Pounds_Onions;
                    break;
                case'T':
                case't':
                    cout<<"You picked Tomatoes! How many pounds do you want?"<<endl;
                    cin>>Pounds_Tomatoes;
                    Pounds_Tomatoes*=0.68;
                    cout<<"Your total is: $";
                    cout<<Pounds_Tomatoes;
                    break;
                case'P':
                case'p':
                    cout<<"You picked Potatoes! How many pounds do you want?"<<endl;
                    cin>>Pounds_Potatoes;
                    Pounds_Potatoes*=0.82;
                    cout<<"Your total is: $";
                    cout<<Pounds_Potatoes;
                    break;
            }

    }
    switch(choice)
    {
        case 'F':
        case 'f':
            cout<<"You picked Fruits! Do you want G: Grapes\n A: Apples\n B: Bananas\n"<<endl;
            cin >> Fruit_Choice;
            switch(Fruit_Choice)
            {
                case'G':
                case'g':
                    cout<<"You picked Grapes! How many pounds do you want?"<<endl;
                    cin>>Pounds_Grapes;
                    Pounds_Grapes*=1.9;
                    cout<<"Your total is: $";
                    cout<<Pounds_Grapes;
                    break;
                case'A':
                case'a':
                    cout<<"You picked Apples! How many pounds do you want?"<<endl;
                    cin>>Pounds_Apples;
                    Pounds_Apples*=0.98;
                    cout<<"Your total is: $";
                    cout<<Pounds_Apples;
                    break;
                case'B':
                case'b':
                    cout<<"You picked Bananas! How many pounds do you want?"<<endl;
                    cin>>Pounds_Bananas;
                    Pounds_Bananas*=0.60;
                    cout<<"Your total is: $";
                    cout<<Pounds_Bananas;
                    break;
                default:
                    cout<<"Invalid input"<<endl;
                    break;
            }

    }
    switch(choice)
    {
        case 'C':
        case 'c':
            cout<<"You picked Chips! Do you want W: Wavy\n L: Lays\n O: Onion Rings\n"<<endl;
            cin >> Chips_Choice;
            switch(Chips_Choice)
            {
                case'W':
                case'w':
                    cout<<"You picked Wavy Chips! How many bags do you want?"<<endl;
                    cin>>Wavy;
                    Wavy*=2.28;
                    cout<<"Your total is: $";
                    cout<<Wavy;
                    break;
                case'L':
                case'l':
                    cout<<"You picked Lays! How many bags do you want?"<<endl;
                    cin>>Lays;
                    Lays*=2.50;
                    cout<<"Your total is: $";
                    cout<<Lays;
                    break;
                case'O':
                case'o':
                    cout<<"You picked Onion Rings! How many bags do you want?"<<endl;
                    cin>>Onion_Rings;
                    Onion_Rings*=1.50;
                    cout<<"Your total is: $";
                    cout<<Onion_Rings;
                    break;
                default:
                    cout<<"Invalid input"<<endl;
                    break;
            }

    }
    return 0;
}
