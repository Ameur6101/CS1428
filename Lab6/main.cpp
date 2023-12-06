//Author:Ameur Moujani
//A05273104

//Date:10/12/2023

// Finish the following program which prints alphabets  upto the user's

//letter inclusively using a While Loop.
#include <iostream>

using namespace std;

int main()
{

    char letter;
    char counter = 'a'; //initialize the variable

    // user enters a number
    cout << "Enter a lowercase letter before z to print the alphabet up to: " << endl;
    cin >> letter;

    // check for invalid user input
    if (letter < 'a'  || letter > 'z')
    {
        cout << "Invalid Input" << endl;
        return -1; // terminate program
    }

    // TODO - add your code here.
    // hint: increment a counter variable inside the loop.

    //the ++ operator can be used to increment char variables
    while (counter <= letter){
        cout<<counter<<endl;
        counter++;
    }


    return 0;
}
//test comment
