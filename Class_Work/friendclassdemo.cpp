#include<iostream>
using namespace std;

class Mihir
{
	private :
		int num1;
		friend class Tirth;
		
	public :
		Mihir()
		{
			num1 = 60;	
		}	
};

class Tirth
{
	private :
		int num2;
		 
	public :
		Tirth()
		{
			num2 = 40;	
		}
		
		int add()
		{
			Mihir m;
			return m.num1 + num2;
		}	
};

int main()
{
	Tirth t;
	cout<<"Addition = "<<t.add();
	return 0;
}