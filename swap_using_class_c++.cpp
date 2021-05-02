#include<iostream>
using namespace std;
class cal
{

private:
	int a,b;
public:
	
	int getvalue()
	{
	cout<<endl<<"Enter A value :";
	cin>>a;	 
	cout<<endl<<"Enter B value :";
	cin>>b;  
	}
	
	
	int calc()
	{
	a=a+b;
	b=a-b;
	a=a-b;
	}
	
	
	int print()
	{
	
	cout<<"A value Is :"<<a<<endl;
	cout<<"B Value Is :"<<b<<endl;
	
	}

};

int main()
{

cal c;

c.getvalue();
c.calc();
c.print();

}


