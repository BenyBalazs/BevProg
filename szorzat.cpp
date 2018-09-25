#include"std_lib_facilities.h"
int main()
{
	int a;
	int b;	
	cout<<"<<Írj egy számot a helyére:";	
	cin>>a;
	cout<<"Írj egy számot b helyére:";
	cin>>b;
	if(a==0 || b==0)
	{
		cout<<"0 esetén nem lehet csrélni"<<"\n";
	}	
	else if(a>b) 	
	{		
		b=b*a;
		a=b/a;
		b=b/a;
		cout<<"a: "<< a <<"\n";
		cout<<"b: "<< b << "\n";
	}
	else if(a<=b) 	
	{		
		a=a*b;
		b=a/b;
		a=a/b;
		cout<<"a: "<< a <<"\n";
		cout<<"b: "<< b << "\n";
	}
}
