#include<iostream>
using namespace std;

class A
{
	public :
		int a;
		void getA()
		{
			cout<<"Enter A : ";
			cin>>a;	
		}
		
		void showA()
		{
			cout<<"A = "<<a;
		}
};

class B : public A
{
	public :
		int b;
		void getB()
		{
			cout<<"Enter B : ";
			cin>>b;	
		}
		
		void showB()
		{
			cout<<endl<<"B = "<<b;
		}
};

class C : public B
{
	public :
		int c;
		void getC()
		{
			cout<<"Enter C : ";
			cin>>c;	
		}
		
		void showC()
		{
			cout<<endl<<"C = "<<c;
		}
};

int main()
{
	C c;
	c.getA();
	c.getB();
	c.getC();
	
	c.showA();
	c.showB();
	c.showC();
	
	return 0;
}