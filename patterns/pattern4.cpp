#include <iostream>
using namespace std;

int main()
{
  cout << "enter the number of rows : " << endl;
  int row;
  cin >> row;
  cout << "enter number of columns : " << endl;
  int col;
  cin >> col;
  for (int i = row; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// * * * * * 
// * * * *
// * * *
// * *
// *