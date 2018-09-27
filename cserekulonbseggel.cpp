#include "std_lib_facilities.h"

int main()
{
	cout<<"Adjon meg a 2 számot!\n";
  	int elsoszam;
  	int masodikszam;

  	cin>>elsoszam>>masodikszam;
  
	elsoszam = elsoszam+masodikszam;
	masodikszam=elsoszam-masodikszam;
	elsoszam=elsoszam-masodikszam;

 cout<<"Kivonás után a két szám : "<<elsoszam<<" , "<<masodikszam<<"\n";
}
