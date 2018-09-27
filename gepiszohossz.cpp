#include "std_lib_facilities.h"

int main()
{
	int szam=1;
	int db=0;

    while(szam!=0){
    	szam = szam<<1;
    	++db;
    }
	cout <<db<<"\n";
}
