#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
	
	try{
		if(b==0 || a==0)
		{
			throw b;
		}
		else{
			cout<<"additon is:"<<a+b;
		}
	}
	catch(int b){
		cout<<"a or b both are 0";
	}
}