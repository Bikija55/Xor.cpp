#include<iostream>
using namespace std;

int main()
{
	int x,y;
	
	cout<<"enter value of x:";
	cin>>x;
	cout<<"enter value of y:";
	cin>>y;
	
	cout<<endl<<endl;
	cout<<"before swap value:"<<"x="<<x; 	cout<<"\tbefore swap value:"<<"y="<<y<<endl;
	
	x=x^y;
	y=x^y;
	x=x^y;
	
	cout<<endl;
	cout<<"after swap value :"<<"x="<<x<<endl;
	cout<<"after swap value :"<<"y="<<y<<endl;
	return 0;
	
}

