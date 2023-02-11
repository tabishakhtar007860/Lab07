#include <iostream>
using namespace std;
float caculatePrice(float Inherited,int pastYear);
main()
{
    int Inherited,pastYear;
    cout <<"Enter Inherited Money:";
    cin >> Inherited;
    cout <<"Enter Year,Until He has to live in Past:";
    cin >>pastYear;
    
    int result = caculatePrice(Inherited,pastYear);
    if( result > Inherited)
    {
        cout << "Yes! He will live a carefree Life and will have "<< result - Inherited <<"  Left"<<endl;
    }
    else
    {
        cout <<"You will need "<<Inherited-result << " dollars to survive"<<endl;
    }
}
float caculatePrice(float Inherited,int pastYear)
{
    int current=18;
for(int i=1800;i<=pastYear;i++)
    {
        if( i%2 == 0)
        {
            Inherited -= 12000;
        }
        else if( i%2 != 2)
        {
            Inherited -= 12000 - 50*(current); 
        }
        current++;

    }
    return Inherited;
}