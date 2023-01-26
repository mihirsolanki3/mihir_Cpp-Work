#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<add<int>(5,7)<<endl;
	cout<<add<float>(6.3f,47.5)<<endl;
	cout<<add<string>("Mihir ","Solanki")<<endl;
	return 0;
}