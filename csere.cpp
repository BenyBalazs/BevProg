#include "std_lib_facilities.h.1"
int main()
{
int a;
int b;
cout << "Irj be egy számot a helyére\n";
cin >> a ;

cout << "Irj be egy számot b helyére\n";
cin >> b ;

a = a + b; // 3 + 5
b = a - b; //8 - 5
a = a - b; //10 - 5 

cout << "a : " << a <<" \n";
cout << "b : " << b <<" \n";
}
