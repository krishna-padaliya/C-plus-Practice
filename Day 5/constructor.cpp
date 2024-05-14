#include <iostream>
using namespace std;
class base{
	private:
		int a,b;
	public:
		base()
		{
			cout<<"Enter the value for A = ";
			cin>>a;
			cout<<"Enter the value for B = ";
			cin>>b;
		}
		void sum()
		{
			cout<<"Addition of two value = "<<a+b;
		}
};
int main()
{
	base b1;
	b1.sum();
}