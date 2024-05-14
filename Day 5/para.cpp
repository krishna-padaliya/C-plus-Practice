#include <iostream>
using namespace std;
class base{
	private:
		int a,b;
	public:
		base(int x, int y)
		{
			a=x;
			b=y;
		}
		void sum()
		{
			cout<<"Addition of two value = "<<a+b;
		}
};
int main()
{
	base b1(20,30);
	b1.sum();
}