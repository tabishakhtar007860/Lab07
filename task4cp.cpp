#include <iostream>
using namespace std;
main()
{
    int num1=0;
    int num2=1;
    int number,sum=0;
    cout<<"enter how many numbers you want:";
    cin>>number;
    for(int x=0;x<number;x++)
    {
        sum=num1+num2;
        num1= num2;
        num2=sum;
        cout<<sum<<"  ";

    }

}