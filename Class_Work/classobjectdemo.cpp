#include<iostream>
using namespace std;

class Demo
{
	public :
		string name;

		void getname()
		{
			cout<<endl<<"Enter Name : ";
			cin>>name;
		}
		void showname()
		{
			cout<<endl<<"Your Name is : "<<name;
		}
};

int main()
{
	Demo n;
	n.getname();
	n.showname();
	return 0;
}