#include <iostream>
using namespace std;
void PrintTable(int multiply,int number);
main()
{
    int multiply=1;
    int number;
    cout<<"enter number to get multipy table of it:";
    cin>>number;
     PrintTable(multiply,number);


}
void PrintTable(int multiply,int number)
{

 for (int x=1;x<=10;x++)
    {   

        multiply=number*x;
        cout<<number<<"*"<<x<<"="<<multiply<<endl;
    }


}