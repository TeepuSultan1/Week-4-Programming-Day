#include<iostream>
using namespace std;
	void longestTime(int a,int b);
main (){
	int a,b;
	cout<<"Enter the number of hours: ";
	cin>>a;
	cout<<"Enter the number of minutes: ";
	cin>>b;
	longestTime(a,b);
	}
	
	void longestTime(int a,int b)
	{
	int c=a*60;
	if(c>b)
	{
	cout<<a;
	}	
	if(c<b)
	{
	cout<<b;
	}
	}