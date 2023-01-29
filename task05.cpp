#include<iostream>
using namespace std;
void triangle(int number);
main()
{
    int number;
    cout << "enter the number to find dots in triangle ........." << endl;
    cin >> number;
    triangle( number);
    cout << endl;
    triangle( number);
}
void triangle(int number)
{
     int sum=0;
    for (int i =1 ; i <= number ; i = i + 1)
    {
        
        sum = sum + i;
    }
     cout << "the number of dots in a triangle is ......... " << sum ;
 }
