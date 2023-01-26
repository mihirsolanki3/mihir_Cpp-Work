#include<iostream>
using namespace std;

class StaticD 
{
	public :
			static int objectCount;
			
	StaticD()
	{
		cout<<"Default Constuctor Called."<<endl;
		objectCount++;	
	}	
};

int StaticD :: objectCount = 0;

int main()
{
	StaticD s,s1,s2,s3,s4;
	cout<<"\nObject's count is : "<<s1.objectCount<<endl;
	return 0;
}
