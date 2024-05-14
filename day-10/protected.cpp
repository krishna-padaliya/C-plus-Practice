#include<iostream>
using namespace std;
class base1{
	protected:
	int a;
	public:
	void getdata()
	{
		cout<<"Enter value of a:"<<endl;
		cin>>a;
	}
};
class base2{
	protected:
	int b;
	public:
	void getdata()
	{
		cout<<"Enter value of b:"<<endl;
		cin>>b;
	}
};
class base3:public base1,public base2{
	public:
	void display()
	{
		cout<<"Sum of Two Value:"<<a+b;
	}
};
int main()
{
	base3 b1;
	b1.base1::getdata();
	b1.base2::getdata();
	b1.display();

}