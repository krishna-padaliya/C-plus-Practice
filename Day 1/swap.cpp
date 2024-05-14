#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter the value of A = ";
	cin>>a;
	
	cout<<"Enter the value of B = ";
	cin>>b;
	
	cout<<"Old value for A = "<<a<<endl;
	cout<<"Old value for B = "<<b<<endl;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"New value for A = "<<a<<endl;
	cout<<"New value for B = "<<b<<endl;
}