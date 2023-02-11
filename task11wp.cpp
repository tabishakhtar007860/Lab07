#include <iostream>
using namespace std;
main()
{
int number;
cout<<"enter number to show counting:";
cin>>number;
cout<<"*using for loop*";
for(int x=0; x<=number;x++)
{
    cout<<x<<endl;
}
cout<<"*using While loop*";
int count=0;
while(count<=number)
{
    cout<<count<<endl;
    count =count+1;

}

}