#include "std_lib_facilities.h"

int main()
{

 	 cout<<"Adja meg a 2 számot!\n";
 	 int elsoszam;
 	 int masodikszam;

  	cin>>elsoszam>>masodikszam;
  
	elsoszam = elsoszam*masodikszam;
	masodikszam=elsoszam/masodikszam;
	elsoszam=elsoszam/masodikszam;
	cout<<"A muvelet utan a 2 szam:"<<elsoszam<<","<<masodikszam<<"\n";
}
