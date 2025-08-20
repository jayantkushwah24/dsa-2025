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
  for (int i = 01; i <= row; i++)
  {
    for (int j = 01; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// * 
// * *
// * * *
// * * * *
// * * * * *