#include <iostream>
using namespace std;
main()
{
  int age=0, toy=0, money = 0, toyPrice = 0;
  float left, WMprice=0;
  cout << "enter Lilly's age:";
  cin >> age;
  cout << "enter washing machine price:";
  cin >> WMprice;
  cout << " enter unit price of toy:";
  cin >> toyPrice;
  for (int x = 1; x <= age; x++)
  {
    if (x % 2 == 0)
    {
      money = money+(x/2*10);
      money--;
    }
    else
    {
      toy = toy + 1;
    }
  }

  float toyTotal = toy * toyPrice;
  float moneyTotal = money + toyTotal;
  if (moneyTotal> WMprice)
  {
    cout << "Yes! is remaining money ";
    cout<<moneyTotal-WMprice;
  }
  if (moneyTotal < WMprice)
  {
    cout << "No! " << moneyTotal;
  }
}