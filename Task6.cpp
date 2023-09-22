#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	int s;
	cin>>s;
	cout<<"Enter the cost of the bag: $";
	int c;
	cin>>c;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	float a;
	cin>>a;
	int f;
	f=c/s;
	cout<<"Cost of fertilizer per pound: $"<<f<<endl;
	int sf;
	sf=c/a;
	cout<<"Cost of fertilizing per square foot: $"<<sf;
	}