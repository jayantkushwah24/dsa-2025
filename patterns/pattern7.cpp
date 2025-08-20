#include <iostream>
using namespace std;

int main()
{
  cout << "enter the number of rows" << endl;
  int row;
  cin >> row;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < (row * 2) - 1; j++)
    {
      if (j >= row - i - 1 && j <= row + i - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * * 