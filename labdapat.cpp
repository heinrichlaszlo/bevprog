#include "std_lib_facilities.h"
int main()
{
	int x = 0;
	int y = 0; 

	int xm=100; 
	int ym = 50;
	
	int z;	
	int w;
    while(true)
    {
    	w = abs((y%ym)-(ym/4));
    	for (int i = 0; i < w; i++)
    	{
    		cout << "\n";
    	}
    	z = abs((x%xm)-(xm/4));
    	for (int i = 0; i < z; i++)
    	{
    		cout << " ";
    	}
    	cout << "*";
    	for (int i = w; i < 25; i++)
    	{
    		cout << "\n";
    	}
    	x++;
    	y++;
    }
}
