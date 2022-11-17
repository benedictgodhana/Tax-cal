#include <iostream>

using namespace std;

int main()
{
  //declare variables
  int Grosssalary,Netsalary, Taxpayable;


    //input varriables 

  cout<< "Enter Gross Salary:";
  cin>>Grosssalary;

  
  
  Taxpayable= 25%*Grosssalary;
  cout<<"Tax Payable is:"<<Taxpayable<<endl;

  Netsalary= Grosssalary-Taxpayable;

  cout<<"Net Salary is:"<<Netsalary<<endl;

}
