#include<iostream>
using namespace std;
class base{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the value for A = ";
			cin>>a;
			cout<<"Enter the value for B = ";
			cin>>b;
		}
		int max()
		{
			if(a>b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
		void showdata()
		{
			cout<<"This value is Bigger = "<<max();
		}
};
int main()
{
	base b1;
	b1.getdata();
	b1.showdata();
}