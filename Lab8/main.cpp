//TO-DO: Ameur Moujani
//TO-DO: 10/26/2023
//CS1428 Lab
//Lab 8
//Description: this program will perform some computations on a set of numbers
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
using namespace std;
 void doub(int value)
    {
        cout << value << " " << (value*2) << endl;
    }

    void half(int value)
    {
        cout << value << " " << (value/2) << endl;
    }

    int main()
    {
        int num = 0;
        while (num < 10)
        {
            if (num > 5)
                half(num);
            else
                doub(num);
            num += 2;
        }

        return 0;
    }



