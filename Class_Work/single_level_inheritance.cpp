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

int main()
{
	B b;
	b.getA();
	b.getB();
	b.showA();
	b.showB();
	return 0;
}