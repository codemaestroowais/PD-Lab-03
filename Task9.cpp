#include<iostream>
using namespace std;
main()
{
	cout<<"Enter a 4-digit number: ";
	int sum;
	cin>>sum;
	int a;
	a=sum%10;
	int b;
	b=(sum/10)%10;
	int c;
	c=(sum/100)%10;
	int d;
	d=(sum/1000)%10;
	int e;
	e=a+b+c+d;
	cout<<"Sum of the individual digits: "<<e;
}