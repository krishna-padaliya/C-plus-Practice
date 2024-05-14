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
		void showdata()
		{
			cout<<"Value of A = "<<a<<endl;
			cout<<"Value of B = "<<b;
		}
		
};
int main()
{
	base b1;
	b1.getdata();
	b1.showdata();
}