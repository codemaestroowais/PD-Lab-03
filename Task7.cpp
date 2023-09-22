#include<iostream>
using namespace std;
main()
{	

	int adult;
	int child;
	int adultTS;
	int childTS;
	int charity;
	
	cout<<"Enter the movie name: ";
	string movieName;
	cin>>movieName;
	cout<<"Enter the adult ticket price: $";
	cin>>adult;
	cout<<"Enter the child ticket price: $";
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	
	cin>>adultTS;
	cout<<"Enter the number of child tickets sold: ";
	
	cin>>childTS;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	
	cin>>charity;
	cout<<endl;
	int ticketSales;
	ticketSales=(adultTS*adult)+(childTS*child);
	int donation;
	donation=ticketSales*0.1;
	int remaining;
	remaining=ticketSales-donation;
	cout<<"Movie: "<<movieName<<endl;
	cout<<"Total amount generated from ticket sales: $"<<ticketSales<<endl;
	cout<<"Donation to charity ("<<charity<<"%): $"<<donation<<endl;
	cout<<"Remaining amount after donation: $"<<remaining;
}