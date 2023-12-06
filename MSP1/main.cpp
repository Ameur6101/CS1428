#include <iostream>
using namespace std;

int main() {
double loan_amount;
double payment_amount;
double interest_rate;
int payments;
payments=0;

cout<<"What is the loan amount?: ";
cin>>loan_amount;
cout<<"What is the payment amount?: ";
cin>>payment_amount;
cout<<"What is the interest rate?: ";
cin>>interest_rate;

for(;loan_amount>0;payments++)
{
loan_amount=loan_amount+(loan_amount*interest_rate);
loan_amount-=payment_amount;
}

if(payments==1)
{
cout<<payments<<" payment"<<endl;
}
else
{
cout<<payments<<" payments"<<endl;
}
return 0;
}
