#include <iostream>
using namespace std;
main()
{
int number,x;
float p1=0,p2=0,p3=0,p4=0,p5=0;
cout<<"enter a number to get input number:";
cin>>x;
for(int y=1 ; y<=x ; y++ )
{
    cout<<"enter number:";
    cin>>number;
    if(number>=0 && number <= 200)
    {
        p1=p1+1;
    }
    else if(number > 200 && number <= 399)
    {
        p2=p2+1;
    }
    else if(number >=400 && number <=599)
    {
        p3=p3+1;
    }
    else if(number >= 600 && number <= 799)
    {
        p4=p4+1;
    }
    else if(number >=800)
    {
        p5=p5+1;
    }
    }
    cout<<p1/x*100<<"%"<<endl;
    cout<<p2/x*100<<"%"<<endl;
    cout<<p3/x*100<<"%"<<endl;
    cout<<p4/x*100<<"%"<<endl;
    cout<<p5/x*100<<"%"<<endl;
  
}