#include "std_lib_facilities.h"
int main()

{
char friend_sex=0; //közös barát neme
string firends_name; //közös barát
string first_name; // akinek a levelet írom
string neved; //a te neved
int age = 0; //barátom kora
{
cout << "Add meg a nevedet (majd üss 'entert'):\n";
cin >> neved; // read characters into neved
{
cout << "Add meg az embernek a nevét akinek írsz (majd üss 'entert'):\n";
cin >> first_name; // read characters into first_name

{
cout <<"Kérlek írd be egy másik barátod nevét\n";
cin >> firends_name;
{
cout <<"Kérlek írj egy m betűt ha a barát férfi és f et ha a barát nő\n";
cin >> friend_sex;

{
cout <<"Kérlek add meg a barátod életkorát\n";
cin >> age;

while (age <= 0 || age >= 110)
{simple_error("you are rekidding!");}
{
cout << "Kedves, " << first_name << "!\n";
cout <<"Hogy vagy? Hiányzol nekem! Vettem egy kutyát. Szeretem a pizzát\n";
cout << "Láttad " << firends_name << " mostanában ?\n";

if (friend_sex == 'm')
{cout << "Ha talállkozol " <<firends_name<< " férfi/fiú barátommal akkor mond meg nek, hogy kerestem!\n";}

if (friend_sex == 'f')
{cout << "Ha talállkozol " <<firends_name<< " nő/lány barátommal akkor mond meg nek, hogy kerestem!\n";}

cout << "Hallottam nemrég volt a szülinapod és mostmár " <<age<< " éves vagy\n";

if (age < 12)
{cout << "Jövőre " <<age + 1 << " éves leszel!\n";}

if (age == 17)
{cout << "Jövőre már szavazhatsz!\n";}

if (age > 70)
{cout <<"Remélem élvezed a nyugdíjat\n";}
cout << "Sok szeretettel " <<neved<< "!\n";

}
}
}
}
}
}
}

