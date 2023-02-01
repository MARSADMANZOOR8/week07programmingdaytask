#include<iostream>
using namespace std;
void printprecentage(int number);
main()
{
    int number;
    cout << "enter the number of the lines on which you want to enter the number " << endl;
    cin >> number;
    int  num;
    float percentage1;
    float percentage2;
    float percentage3;
    printprecentage( number);
    
}
void printprecentage(int number)
{
   int  num;
   int count1=0 , count2=0 ,count3=0;
    float percentage1;
    float percentage2;
    float percentage3;
    for (int i = 1 ; i <= number;i++)
    {
     cout <<"enter the number whosse percentage you want yo check " << endl;
     cin >> num;
     if(num%2==0)
     {
        count1 = count1 + 1;
     }
     if(num%3==0)
     {
        count2 = count2 + 1; 
     }
     if(num%4==0)
     {
        count3 = count3 + 1;
     }        
    }

       
    cout << count1 << endl; 
    cout << count2 << endl; 
    cout << count3 << endl; 
    percentage1 = count1 * 100 / number;
    cout << percentage1 << endl;
    percentage2 = count2 * 100 / number;
    cout << percentage2 << endl;
    percentage3 = count3 * 100 / number;
    cout << percentage3 << endl; 
}