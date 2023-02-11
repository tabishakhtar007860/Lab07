#include <iostream>
using namespace std;
int Total(int number);
main()
{
    int number;
    cout<<"enter number:";
    cin>>number;
    int result = Total(number);
    cout<<result;
}
int Total(int number)
{
    int number1,number2=0,x=1;
    while(number1>0)
    {
        number1=(number/x)%10;
        number2=number1+number2;
        x=x*10;
    }
    return number2;
}
