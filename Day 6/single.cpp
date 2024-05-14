#include<iostream>
using namespace std;
class base{
	int a,b;
	public:
		void getdata()
		{
			cout<<"enter the value of a= ";
			cin>>a;
			cout<<"enter the value of b= ";
			cin>>b;
		}
		void sum()
		{
			cout<<"the addition of two number= "<<a+b<<endl;
		}
};
class derived:public base
{
	int c,d;
	public:
		void getdata1()
		{
			cout<<"enter the value of c= ";
			cin>>c;
			cout<<"enter the value of d= ";
			cin>>d;
			
		}
		void sub()
		{
			cout<<"the substraction of two number="<<c-d;
		}

	
};
int main()
{
//	base b1;
//	b1.getdata();
//	b1.sum();
	derived d1;
	d1.getdata();
	d1.getdata1();
	d1.sum();
	d1.sub();
	
	}