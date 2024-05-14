#include <iostream>
using namespace std;
class base
{
	private:
		int a;
		static int b;
	public:
		void getdata(int x, int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"The value for A = "<<a<<endl;
			cout<<"The value for B = "<<b<<endl;
		}
		static void data()
		{
			cout<<"The value for B = "<<b<<endl;
		}
};
int base::b=0;
int main()
{
	base b1;
	b1.getdata(20,50);
	b1.getdata(200,500);
	b1.showdata();
	b1.data();
}