#include <iostream>
using namespace std;
main()
{
int multiply=1;
int x=4 ;
while(x>0)
{
multiply = x*multiply;    
x = x-1;
}
cout<<multiply;
}