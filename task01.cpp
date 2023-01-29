#include <iostream>
using namespace std;
void nestedForExample(int rows);
main()
{
    int rows;
    cout <<"enter the desired number of the rows : " << endl;
    cin >> rows;
    nestedForExample( rows);

}
  void nestedForExample(int rows)
  {
    for(int i = 15 ; i<= rows; i=i)
    {
        if (i==0)
        {
            break;
        }
        for(int j = 1;j <= i;j++)
        {
            

            cout <<"*";
        }
        cout << endl;
        i = i-1;
    }
  }