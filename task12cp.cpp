#include <iostream>
using namespace std;
int GCD(int x,int y,int small);
int LCM(int x,int y, int small);
main()
{
int small,x,y;
cout<<"enter first number:";
cin>>x;
cout<<"enter second number:";
cin>> y;
int HCF=GCD(x,y,small);
int result=LCM(x,y,small);
cout<<result;
}
int GCD(int x,int y, int small)
{
if(x >= y)
{
    small=y;
}
else
{
    small=x;
}
for(small,small>=0;small = small -1;)
{
    if(x%small==0 && y%small==0)
    {
        return small;
    }
}

}
int LCM(int x,int y ,int small)
{
    int lcm;
lcm = (x*y)/GCD(x,y,small);
return lcm;
}