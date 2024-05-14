#include <iostream>
using namespace std;
class base{
	private:
		int roll_no;
		char name[20];
	public:
		void getdata()
		{
			cout<<"Enter the Roll Number = ";
			cin>>roll_no;
			cout<<"Enter the Student Name = ";
			cin>>name;
		}
		void showdata()
		{
			cout<<"Roll Number is  = "<<roll_no<<endl;
			cout<<"The Student Name of = "<<name<<endl;
		}
};
int main()
{
	base b1[5];
	for(int i=0; i<4; i++)
	{
		b1[i].getdata();
	}
	for(int i=0; i<4; i++)
	{
		b1[i].showdata();
	}
	
}