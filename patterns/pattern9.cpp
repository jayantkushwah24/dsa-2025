#include <iostream>
using namespace std;

int main()
{
  cout << "enter the number of rows" << endl;
  int row;
  cin >> row;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < row - i; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }
}

//  * * * * * 
//   * * * *
//    * * *
//     * *
//      *