#include<iostream>
using namespace std;
class base
{
    private:
		int x=10;
	public:
		void display1()
		{
			cout<<"Value of X is:"<<x<<endl;
		}
};
class child:public base
{
	private:
		int y=100;
	public:
		void display2()
		{
			cout<<"Value of Y is:"<<y;
		}
};
int main()
{
	child c1;
	c1.display1();
	c1.display2();
}