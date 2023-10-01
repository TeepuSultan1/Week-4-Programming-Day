#include<iostream>
using namespace std;
	void flowerShop(int redRose,int whiteRose,int tulip);
main(){	
	int a,b,c;
	cout<<"Red Rose: ";
	cin>>a;
	cout<<"White Rose: ";
	cin>>b;
	cout<<"Tulips: ";
	cin>>c;
	flowerShop(a,b,c);
	}
	
	void flowerShop(int redRose,int whiteRose,int tulip)
	{	
	float original,discounted;
	original=(2*redRose)+(4.10*whiteRose)+(2.50*tulip);
	if(original>200)
	{
	discounted=original-(original*0.2);
	}
	if(original<=200)
	{
	discounted=original;
	}
	cout<<"Original Price: $"<<original<<endl;
	if(original>200)
	{
	cout<<"Price after Discount: $"<<discounted<<endl;
	}
	if(original<=200)
	{	
	cout<<"No discount applied."<<endl;
	}
	}
	
