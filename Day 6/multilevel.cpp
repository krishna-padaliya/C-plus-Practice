#include<iostream>
using namespace std;
class base{
	int a,b;
	
	public:
		void getdata()
		{
			cout<<"enter the value of a = ";
			cin>>a;
			cout<<"enter the value of b= ";
			cin>>b;
		}
		void sum()
		{
			cout<<"the addition two number = "<<a+b<<endl;
		}
};
class derived:public base{
	int c,d;
	
	public:
		void getdata1()
		{
			cout<<"enter the value of c = ";
			cin>>c;
			cout<<"enter the value of d= ";
			cin>>d;
		}
		void sub()
		{
			cout<<"the substraction two number = "<<c-d<<endl;
		}
};
class derived2:public derived{
		int e,f;
	
	public:
		void getdata2()
		{
			cout<<"enter the value of e = ";
			cin>>e;
			cout<<"enter the value of f= ";
			cin>>f;
		}
		void multi()
		{
			cout<<"the multiplecation two number = "<<e*f<<endl;
		}
};
int main()
{
	derived2 d2;
	d2.getdata();
	d2.getdata1();
	d2.getdata2();
	
	d2.sum();
	d2.sub();
	d2.multi();
}