#include <iostream>
using namespace std;

int main()
{
  int num1 = 10;
  int num2 = 5;

  // cout << num1 + num2 << endl;
  // cout << num1 - num2 << endl;
  // cout << num1 * num2 << endl;
  // cout << num1 / num2 << endl;
  // cout << num1 % num2 << endl;

  // cout << (num1 < num2) << endl;
  // cout << (num1 > num2) << endl;
  // cout << (num1 <= num2) << endl;
  // cout << (num1 >= num2) << endl;
  // cout << (num1 != num2) << endl;
  // cout << (num1 == num2) << endl;

  int age ;
  cout << "Enter your age : " << endl;
  cin >> age; 

  bool isHealthy = true;

  if (age > 18 && isHealthy == true)
  {
    cout << "you are eligible for driving liecense" << endl;
  }
  else
  {
    cout << "not eligible" << endl;
  }
}