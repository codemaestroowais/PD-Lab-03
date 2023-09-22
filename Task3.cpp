#include<iostream>
using namespace std;
main()
{
	cout<<"Enter Initial Velocity (m/s): ";
	float iv;
	cin>>iv;
	cout<<"Enter Acceleration (m/s^2): ";
	float a;
	cin>>a;
	cout<<"Enter Time (s): ";
	int t;
	cin>>t;
	float fv;
	fv=a*t+iv;
	cout<<"Final Velocity (m/s): "<<fv;
	}