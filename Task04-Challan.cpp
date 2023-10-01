#include<iostream>
using namespace std;
	void checkSpeed(int speed);
main(){
	int speed;
	cout<<"Speed: ";
	cin>>speed;
	checkSpeed(speed);
}

	void checkSpeed(int speed)
	{
	if(speed<=120)
	{
	cout<<"Perfect! You're going good.";
	}
	if(speed>120)
	{
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
}
	