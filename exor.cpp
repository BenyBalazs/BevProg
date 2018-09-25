#include"std_lib_facilities.h"
int main()
{
	int a;
	int b;	
	cout<<"Írj egy számot a helyére:";	
	cin>>a;
	cout<<"Írj egy számot b helyére:";
	cin>>b;
	a^=b;
	b^=a;
	a^=b;
	cout<<"a: "<< a <<"\n";
	cout<<"b: "<< b << "\n";
}
