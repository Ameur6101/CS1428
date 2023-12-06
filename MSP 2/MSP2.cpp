//Ameur Moujani
//ID: A05273104
//11-2-2023
//The program will take user inputed grades for 3 test and determine the total average and the average of the 2 highest scores
#include <iostream>
#include <iomanip>
using namespace std;


double averages(int test_1, int test_2, int test_3, double& best2_avg)
//takes the user inputted values for the 3 test scores, and the
//double variable and will return them with values to the main function
{
    double highest2;

    double total_avg = (test_1 + test_2 + test_3)/3.00;

    int lowestScore = test_1;    //im sure there must be a better way to do this, but i could only think of using if statements to determine the lowest and the highest score
        if(test_2 < lowestScore)
        {
            lowestScore = test_2;
        }
        if(test_3 < lowestScore)
        {
            lowestScore = test_3;
        }
    int highestScore = test_1;
        if(test_2 > highestScore)
        {
            highestScore = test_2;
        }
        if(test_3 > highestScore)
        {
            highestScore = test_3;
        }
    highest2 = test_1 + test_2 + test_3 - lowestScore; //this ensures that the lowest score is discounted, leaving us with the combined value of the two highest scores
                                //the first part of the averaging is already done when we assign highest2 with the combined value of the two highest scores, all thats left is dividision
    best2_avg = highest2/2.00; //best2_avg is passed to main because we are unable to return 2 separate values in a single function
                                //I would have made a separate function for it, but zybooks specified to use 1 function with four parametes
    return total_avg;
}


int main() //main exists to declare the variables being used, assign the test scores user inputted values and call the averages function
{
   cout << fixed << setprecision(2);   // so the averages output with two digits after the decimal
    int test_1;
    int test_2;
    int test_3;             //declaration of variables
    double total_avg;
    double best2_avg;

    cin>>test_1;
    cin>>test_2;
    cin>>test_3;

    total_avg = averages(test_1, test_2, test_3, best2_avg); //the return value of the function will be assigned to variable total_avg
    cout<<total_avg<<" "<<best2_avg<<endl;

return 0;
}
