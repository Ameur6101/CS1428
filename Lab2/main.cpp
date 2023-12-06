#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //declare the variables
    string name;
    int price;

    //declare the file stream variables
    ofstream i_file;

    //open the file
    i_file.open("Apple_iphone_sales_date.txt");

    //Get some data from the file
    //Whatever file inputs into i_file will be called name
    i_file >> name >> name >> price; //this takes the second and third date that is the second data that is islanded by blanks whether enter or space etc.
    cout << price;


    //close file
    i_file.close();

    return 0;
}

//The above is to input into a file, if we wanted tot output to a file we use ofstream o_file in line 13, and make sure to replace every i with o because the new variable is o_file



//note for setw, it indents, but make usre to #include <iomanip>
