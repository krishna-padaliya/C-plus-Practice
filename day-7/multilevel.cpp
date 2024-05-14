#include<iostream>
using namespace std;
class parent
{
	private:
		int x;
	public:
		void getdata1()
		{
			cout<<"Enter Value of "<<x<<endl;
			cin>>x;
		}
};
class chlid1:public parent
{
	private:
		int y;
	public:
		void getdata2()
		{
			cout<<"Enter Value of Y"<<y<<endl;
			cin>>y;
		}
};
class chlid2:public chlid1
{
	private:
		int z;
	public:
		void getdata2()
		{
			cout<<"Enter Value of Z"<<z<<endl;
			cin>>z;
		}
}; 
class chlid3:public child2
{
	public:
		void getdata3()
	cout<<"Addition Of Number is:"<<x+y+z<<endl;
};
int main()
{
	child2 c2;
	c2.get
}