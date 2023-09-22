#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the person's age: ";
	int personAge;
	cin>>personAge;
	cout<<"Enter the number of times they've moved: ";
	int noOfTimes;
	cin>>noOfTimes;
	int years;
	years=personAge/(noOfTimes+1);
	cout<<"Average number of years lived in the same house: "<<years;
}