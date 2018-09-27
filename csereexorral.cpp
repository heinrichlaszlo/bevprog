#include "std_lib_facilities.h"

int main()
{

  cout<<"Kérem adja meg a 2 számot!\n";
  	int elsoszam;
  	int masodikszam;
		
  	cin>>elsoszam>>masodikszam;
  
	elsoszam = elsoszam^masodikszam;
	masodikszam=elsoszam^masodikszam;
	elsoszam=elsoszam^masodikszam;
	cout<<"A csere után a két szám :"<<elsoszam<<" , "<<masodikszam<<"\n";
}
