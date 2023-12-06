//TO-DO: Ameur Moujani
//TO-DO: 10/26/2023
//CS1428 Lab
//Lab 8
//Description: this program will perform some computations on a set of numbers
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
using namespace std;
// Function Prototypes:
bool isValidnum(int);
bool isValidop(char);
int result(int, char);
int main()
{
    int n;
    int sum;
    char op;
    char cont;

    do
        {
        cout << "Enter a number [1 - 100]:";
        cin >> n;
        while(!isValidnum(n)) // Function Call
        {
            cout << "ERROR: Number must be between 1 and 100." << endl
            << "Enter a valid number [1- 100]: ";
            cin >> n;
        }
        cout << "Enter an operand [+, -, *]:";
        cin >> op;
        while(!isValidop(op)) // Function Call
        {
            cout << "ERROR: Operand must be either +, - or *" << endl
                << "Enter a valid operand [+, -, *]: ";
            cin >> op;
        }
        sum = result(n, op); // Function Call
        switch(op)
        {
            case '+':
                cout << "The sum";
                break;
            case '-':
                cout << "The difference";
                break;
            case '/':
                cout << "The quotient";
                break;
            case '*':
                cout << "The product";
                break;
        }
        cout << " of numbers from 1 to " << n << " is " << sum << endl;
        cout << "\nWould you like to continue? (Y or N): ";
        cin >> cont;
    }while(cont == 'Y' || cont == 'y');

    return 0;
}
// TODO: Add function definitions here
bool isValidnum(int n)
{
    return (n>0 && n<=100);
}
bool isValidop(char op)
{
    return (op == '+' || op=='-' ||op == '*');
}
int result(int n, char op)
{
    int res = 0;
    for(int i = 1; i <= Y; i++)
    {
        switch(op)
        {
            case '+':
                res += i;
                break;
            case '-':
                res -= i;
                break;
            case '*':
                if(i == 1)
                {
                    res = 1;
                }
                res *= i;
                break;
        }
    }
    return res;
}
