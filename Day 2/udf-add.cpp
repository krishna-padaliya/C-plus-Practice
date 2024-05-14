#include <iostream>
using namespace std;
void add();
int main()
{
	add();
}
void add()
{
	int a,b;
	
	cout<<"Enter the value for A = ";
	cin>>a;
	cout<<"Enter the value for B = ";
	cin>>b;
	
	cout<<"Two value addition of A and B = "<<a+b;
}