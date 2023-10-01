#include<iostream>
using namespace std;
	void discount(string name,float price);
main(){
	string name;
	float price;
	while(true)	
{
	cout<<"Enter the country's name: "<<endl;
	cin>>name;
	cout<<"Enter the ticket price in dollars: $"<<endl;
	cin>>price;
	discount(name,price);
	}
}
	
	void discount(string name,float price)
	{
	float final;
	if(name=="Pakistan")
	{
	final=price-(price*0.05);
	}
	if(name=="Ireland")
	{	
	final=price-(price*0.1);
	}
	if(name=="India")
	{	
	final=price-(price*0.2);
	}
	if(name=="England")
	{	
	final=price-(price*0.3);
	}
	if(name=="Canada")
	{	
	final=price-(price*0.45);
	}
	cout<<"Final ticket price after discount: $"<<final<<endl;
}