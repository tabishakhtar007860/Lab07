#include <iostream>
using namespace std;
void totalDigits(int count,int number);
main()
{
    int number,count=0;
    cout<<"enter number:";
    cin>>number;
    totalDigits(count,number); 


}
void totalDigits(int count,int number)
{
while(number>0)
{
    number=number/10;
    count =count+1;
}
cout <<"Number of digits:"<<count;


}