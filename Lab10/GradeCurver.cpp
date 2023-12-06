//TO-DO: Ameur Moujani
//TO-DO: 11/9/2023
//CS1428 Lab
//Lab 10
//Description: this program will apply a curve to 5 grades
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <iomanip>
using namespace std;

void findCurveInfo(double g[], const int SIZE, int &highest, double &curve)
{
    highest = 0;
    for(int i = 0; i < SIZE; i++) {
        if(g[i] > g[highest]) {
            highest = i;
        }
    }
    curve = (100 - g[highest])/2;
}

double getAverage(double g[], const int SIZE)
{
    double total = 0;
    for(int i = 0; i < SIZE; i++) {
        total += g[i];
    }
    return total/SIZE;
}

void applyCurve(double g[], const int SIZE, double curve)
{
    for(int i = 0; i < SIZE; i++) {
        g[i] += curve;
    }
}

void printData(double g[], const int SIZE,
int highest, double average, double curve)
{
    cout << "Grades after curve: " << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << g[i] << endl;
    }
    cout << "Curve amount applied: " << curve << endl;
    cout << "Average after curve: " << getAverage(g, SIZE) << endl;
    cout << "Highest grade after curve: " << g[highest] << endl;
}

//TODO: Complete the function definitions
int main()
{
    const int SIZE = 5;
    int highest;
    double average, curve, g[SIZE];

    cout << "Enter " << SIZE << " grades: " << endl;

    for(int i = 0; i < SIZE; i++)
        {
        cin >> g[i];
        }
    // TODO: Add function calls
    findCurveInfo(g, SIZE, highest, curve);
    applyCurve(g, SIZE, curve);
    average = getAverage(g, SIZE);
    printData(g, SIZE, highest, average, curve);
    return 0;
}
