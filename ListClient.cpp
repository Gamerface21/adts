#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 cout <<"Welcome to ADT!" <<endl;
L1.insert(10,1) ;
L1.insert(20,2);
L1.insert(30,3);
L1.insert(40,4);
L1.insert(50,5);

L2.insert(50,1);
L2.insert(25,2);
L2.insert(75,3);
 
 for(int i=1; i <= L1.size(); i++)
  {
	cout<< L1.get(i) << "" <<endl;
	}
	cout<<endl;
 //Do some stuff with L1, L2, ...
 // ...

for(int i=1; i <= L2.size(); i++)
  {
	cout<< L2.get(i) << "" <<endl;
	}
	cout<<endl;
}


