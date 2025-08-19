#include <iostream>
using namespace std;

int main()
{
  // int balance;
  // cout << "Enter your balance : " << endl;
  // cin >> balance;

  // if (balance >= 10)
  // {
  //   cout << "you can enjoy a maggi" << endl;
  // }
  // else
  // {
  //   cout << "low balance for a maggi" << endl;
  // }

  // int num ;
  // cout << "Enter a number : " << endl;
  // cin >> num;

  // if (num % 2 == 0)
  // {
  //   cout << "even" << endl;
  // }
  // else
  // {
  //   cout << "odd" << endl;
  // }

  int a;
  int b;
  int c;
  cout << "Enter three numbers number : " << endl;
  cin >> a >> b >> c;

  if (a > b)
  {
    if (a > c)
    {
      cout << a << " is the largest number" << endl;
    }
    else
    {
      cout << c << " is the largest number" << endl;
    }
  }
  else
  {
    if (b > c)
    {
      cout << b << " is the largest number" << endl;
    }
    else
    {
      cout << c << " is the largest number" << endl;
    }
  }
}