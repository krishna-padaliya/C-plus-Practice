#include<iostream>
using namespace std;
class base{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter Value of a:";
			cin>>a;
			cout<<"Enter Value of b:";
			cin>>b;
		}
		void display()
		{
			cout<<"Addition:"<<a+b;
		}
};
int main()
{
	base b1;
	base *p;
	p=&b1;
	p->getdata();
	p->display();
}