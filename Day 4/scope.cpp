#include <iostream>
using namespace std;
class base
{
	private:
		int a,b;
	public:
		void getdata();
		void addition();
};
void base::getdata()
{
	cout<<"Enter the value of A = ";
	cin>>a;
	cout<<"Enter the value of B = ";
	cin>>b;
}
void base::addition()
{
	cout<<"Addition of two value = "<<a+b;
}
int main()
{
	base b1;
	b1.getdata();
	b1.addition();
}