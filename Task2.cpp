#include<iostream>
using namespace std;
main()
{
	cout<<"Number of Minutes: ";
	int min;
	cin>>min;
	cout<<"Frames per Second: ";
	int seconds;
	cin>>seconds;
	int frames;
	frames=min*seconds*60;
	cout<<"Total Number of Frames: "<<frames;
}