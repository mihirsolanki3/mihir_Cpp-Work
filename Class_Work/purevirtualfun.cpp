#include<iostream>
using namespace std;

class base
{
	public : 
		void display1()
		{
			cout<<"Non Pure Virtual Function in Base Class"<<endl;
		}
		virtual void display2(); //pure virtual function
};

class derived : public base
{
	public : 
		void display2()
		{
			cout<<"Function Implemented in Derived Class"<<endl;
		}
};

int main()
{
	derived d;
	d.display1();
	d.display2();
	
	return 0;
}