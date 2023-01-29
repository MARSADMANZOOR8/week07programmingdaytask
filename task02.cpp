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
    for(int i = 1 ; i<= rows; i=i+1)
    {
        for(int j = 1;j <= i;j++)
        {
            

            cout <<"*";
        }
        cout << endl;
    
    }
  }