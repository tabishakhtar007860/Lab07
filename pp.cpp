#include <iostream>
using namespace std;
float caculateMoney(int age,int price , int toyPrice );
main()
{
    int age,price,toyPrice;
    cout<<"enter age of lilly:";
    cin>>age;
    cout<<"enter Washing Machine Price:";
    cin>>price;
    cout<<"enter toy price:";
    cin>> toyPrice;
float  result = caculateMoney(age,price , toyPrice );
cout<<result;
}
float caculateMoney(int age,int price , int toyPrice )
{
    float money=0,toy=0,increase=0,x=0;
while(age>0)
{
    if(age%2==0)
    {
         
        money = (money + increase );
           increase = increase + 9;   
    }
    else if(age%2 != 0)
    {
        toy=toy+1;
    }
    age--;

}

float Totaltoys=toy*toyPrice;

float total = Totaltoys+money;
if(total >= price)
{
    int tot=total-price;
    cout<<"yes";
    return tot;
}
if( total < price )
{
    cout<<"no";
    return total;
}
}