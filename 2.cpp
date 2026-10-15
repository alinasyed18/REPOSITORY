#include<iostream>
#include<string>
using namespace std;
string monthName(int month);
int main()
{
	int month;
	cout<< "Enter the number of month=";
	cin>> month;
	monthName(month);
	return 0;
}
string monthName(int month)
{
	string monthName;
	if(month==1)
	{
		cout <<"January";
	}
	if(month==2)
	{
		cout <<"February";
}
	if(month==3)
	{
		cout << "March";
	}
	if(month==4)
	{
		cout << "April";
	}
	if(month==5)
	{
		cout << "May";
	}
	if(month==6)
	{
		cout << "June";
	}
	if(month==7)
	{
		cout << "July";
	}
	if(month==8)
	{
		cout << "August";
	}
	if(month==9)
	{
		cout <<"September";
	}
	if(month==10)
	{
		cout << "October";
	}
	if(month==11)
	{
		cout << "November";
	}
	if(month==12)
	{
	cout << "December";
    }
	if(month>12)
    {
	     monthName= "Invalid Number of month";
    }
    
     return monthName;
     
 
    
    
	}

	














