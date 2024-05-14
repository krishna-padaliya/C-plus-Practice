#include<iostream>
using namespace std;
class base
{
	private:
		int a,b;
	public:
		void sub()
		{
			cout<<"Enter Value Of a:";
			cin>>a;
			
			cout<<"Enter Value of b:";
			cin>>b;
		}
		
		void total()
		{
			cout<<"Subtraction is:"<<a-b<<endl;
		}
};
int main()
{
	base b1;
	b1.sub();
	b1.total();
}