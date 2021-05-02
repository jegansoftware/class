#include<iostream>
using namespace std;

class program{
	private:
	 	int a,b,c; 
	public:
		getvalue
		int ()
		{
		cout<<"Enter A value "<<endl;
		cin>>a;
		cout<<"Enter B value "<<endl;
		cin>>b;	   	   
		}
		
		
		int calc()
		{
		a=a+a;
		b=b+b;
		a=a*b;
		b=a-b;
		}

		
		int print()
		{
		
		cout<<"A Value Is "<<a<<endl;
		cout<<"B Value Is "<<b<<endl;
		}
				
};


int main()
{
program exe;
exe.getvalue();
exe.calc();
exe.print();
}


