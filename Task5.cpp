#include<iostream>
using namespace std;
main()
{
	cout<<"Enter the Name of the Person: ";
	string n;
	cin>>n;
	cout<<"Enter the target weight loss in kilograms: ";
	float w;
	cin>>w;
	float d;
	d=w*15;
	cout<<n<<" will need "<<d<<" days to lose "<<w<<" kg of weight by following the doctor's suggestions";
}