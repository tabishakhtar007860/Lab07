#include <iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
{
int number;
int digit;
cout<<"enter number:";
cin>>number;
cout<<"enter digit to check frequency:";
cin>> digit;
int result = frequencyChecker(number,digit);
cout<<result;

}
int frequencyChecker(int number,int digit)
{
    int repeat=0;
    while(number>0)
    {

int divide,modulus;
divide = number/10;
modulus= number%10;
number=divide;
if(digit == modulus)
{
    repeat = repeat+1;
}

}
return repeat;
}