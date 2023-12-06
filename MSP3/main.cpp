#include <iostream>
using namespace std;

//Fucntion: GetPhoneNumber
//Purpose: Get the phone number that is associated with a speific contact name
//Pre: The name and phone nmumber arrays are the same size and the contact name is a valid string
//Post: Returns the phone number that is associated with the contact aname if found, else it returns and empty string

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName)
{
for(int i=0; i<size; i++)//Loops through the array
{
if(nameArr[i]==contactName)//sets the condition for the contact name if found
{
return phoneNumberArr[i];
}
}
return "";//this executs if the contact name isnt found
}


//Function: main
//Purpose: Reads the names and phone numbers,
//then it finds and prints the phone number associated with a specific contact name
//Pre:There needs to be a function "GetPhoneNumber", and
//the user input needs to be an integer N followed by "N" work pairs, followed by a contact name for the function to work properly
//Post: If contact name is found, print the associated number, if the contact  name is "YourFirstName", also prints "*** MY NAME***"

int main() {
int N;
cin>>N;
//initialization of the arrays
string name[N];
string phoneNumbers[N];
//Read the names and phone numbers
for(int i=0; i<N; i++)
{
cin>>name[i]>>phoneNumbers[i];
}

//initializes the contact names string and takes user input for it
string contactName;
cin>>contactName;

//Call the GetPhoneNumber function to thet the phone number associated with the contact name
string phoneNumber=GetPhoneNumber(name, phoneNumbers, N, contactName);

//If the phone number is foundj
if(phoneNumber != "")
{
//Prints the phone number
cout<<phoneNumber;
//If the contact name is "YourFirstName", also print "*** MY NAME ***"
if (contactName == "YourFirstName")
{
cout<<" *** MY NAME ***";
}
}
   return 0;
}
