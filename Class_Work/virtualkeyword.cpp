#include<iostream>
using namespace std;

class base
{
	public :
		
	virtual void show()
	{
		cout<<"Show from Base Class"<<endl;
	}	
};

class derived : public base
{
	public :
		
	void show()
	{
		cout<<"Show from Derived Class"<<endl;
	}	
};

int main()
{
	base *b = new derived();
	b->show();
	return 0;
}