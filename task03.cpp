#include <iostream>
using namespace std;
void nestedForExample(int rows);
void nesteForExample(int rows);

main()
{
    int rows;
    cout <<"enter the desired number of the rows : " << endl;
    cin >> rows;
    nestedForExample( rows);
    nesteForExample( rows);

}
  void nestedForExample(int rows)
  {
    for(int i = 1 ; i<= rows; i=i+1)
    {
        for(int d=1; d<=rows-i ; d++)
        {
            cout << " " ;
        }
        for(int j = 1;j <= i;j++)
        {
            

            cout <<"*";
        }
        cout << endl;
    
    }
  }
   void nesteForExample(int rows)
  {
    for(int i = 15 ; i<= rows; i=i)
    {
        for(int d=1; d<=rows-i ; d++)
        {
            cout << " " ;
        }
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