#include<iostream>
using namespace std;
	void pet(int holidays);
main(){
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
	}
	
	void pet(int holidays)
	{
	int time,difference,hours,minutes;
	time=(holidays*127)+((365-holidays)*63);
	difference=30000-time;	
	hours=difference/60;
	minutes=difference%60;
	if(difference>=0)
	{
	cout<<"Tom sleeps well"<<endl;
	cout<<hours<<" hours and "<<minutes<<" minutes less for play";
	}	
	if(difference<0)
	{
	cout<<"Tom will run away"<<endl;
	cout<<hours*-1<<" hours and "<<minutes*-1<<" minutes for play";
	}
	}