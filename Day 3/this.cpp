#include<iostream>
using namespace std;
class base{
	private:
		int a,b;
	public:
		void database(int a,int b)
		{
			this->a=a;
			this->b=b;		
		}
		void sum()
		{
			cout<<"Addition of two value = "<<a+b;		
		}		
};
int main()
{
	base b1;
	b1.database(50,100);
	b1.sum();
}