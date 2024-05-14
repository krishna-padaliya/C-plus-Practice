#include <iostream>
using namespace std;
class base{
	private:
		int a,b;    	//data member
	public:
		void sum()  	//member function
		{
			cout<<"Enter the value for A = ";
			cin>>a;
			cout<<"Enter the value for B = ";
			cin>>b;		
		}
		void sum1()		//member function
		{
			cout<<"Two value addition of A and B = "<<a+b;
		}
};
int main()
{
	base b1;
	b1.sum();
	b1.sum1();
}