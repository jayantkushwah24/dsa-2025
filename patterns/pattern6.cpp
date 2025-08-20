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
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= col - i + 1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1