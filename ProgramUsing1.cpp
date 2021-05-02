#include<iostream>
using namespace std;

class calculation
{

private:
	float c;
	int a,b;
public:
	
	int getvalue()
	{
	cout<<"Enter Value "<<endl;
	cin>>c;
	}
	
	int cal()
	{
	
	a=c;
	b=a*5;
	c=a+b;

	}
	
	int print()
	{
	cout<<"A Value Is :"<<a<<endl;
	cout<<"B Value Is :"<<b<<endl;
	cout<<"C Value Is :"<<c<<endl;
	}
};


int main()
{

calculation exe;

exe.getvalue();
exe.cal();
exe.print();
}

