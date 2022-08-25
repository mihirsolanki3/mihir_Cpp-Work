#include<iostream>
using namespace std;

int main()
{
	int a, b;
	
	cout<<endl<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	
	cout<<"\nA = "<<a<<",\tB = "<<b<<endl;
	
	cout<<"\nAddition = "<<(a+b)<<endl;
	cout<<"\nSubtraction = "<<(a-b)<<endl;
	cout<<"\nMultiplication = "<<(a*b)<<endl;
	cout<<"\nDivision = "<<((float)a/b)<<endl;
	
	return 0;
}