#include<iostream>
using namespace std;
void sequence_numbers(int numbers );
main()
{
    int numbers;
    cout << "enter the numbers ......." << endl;
    cin >> numbers;
    sequence_numbers( numbers );
   
}
void sequence_numbers(int numbers )
{
   for(int i = 1 ; i <= numbers ; i = i + 1)
   {
    int k;
    cout << i ;
    k=i;
    if(k%4==0)
    {
        k = k * 10;
    }
    cout << "the sequence is " << k << endl;
   } 
}