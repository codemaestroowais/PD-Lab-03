#include<iostream>
using namespace std;
main()
{
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float vegetablePrice;
	cin>>vegetablePrice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruitPrice;
	cin>>fruitPrice;
	cout<<"Enter total kilograms of vegetables: ";
	int totalKg;
	cin>>totalKg;
	cout<<"Enter total kilograms of fruits: ";
	int totalKgF;
	cin>>totalKgF;
	float rupees;
	rupees=((vegetablePrice*totalKg)+(fruitPrice*totalKgF))/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<rupees;
}