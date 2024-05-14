#include <iostream>
using namespace std;
void swap();
int main()
{
	swap();
}
void swap()
{
	int a,b,c;
	
	cout<<"Enter the value for A = ";
	cin>>a;
	cout<<"Enter the value for B = ";
	cin>>b;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"The new value for A = "<<a<<endl;
	cout<<"The new value for B = "<<b<<endl;
}