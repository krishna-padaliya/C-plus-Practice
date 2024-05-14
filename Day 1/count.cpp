#include<iostream>
using namespace std;
int main()
{
	int a, counts=0; 
   
   	cout<<"Enter a number = ";  
   	cin>>a;  

   while(a!=0)  
   {  
       a=a/10;  
       counts++;  
   }  
     
   cout<<"The number of digits : ",counts;
}