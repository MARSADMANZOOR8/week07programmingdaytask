#include<iostream>
using namespace std;

main()
{
    int range;
    cout<<"Enter range: ";
    cin>>range;
    
    
       for(int i=1;i<=range;i++)
       {
            int a,b;
            int j,k;
             for( a=1;a<=i;a++)
             {
               cout<<"*";
             }
             for( b=range-1;b>=i;b--)
             {
                cout<<" ";
             }
             for( j=range;j>=i;j--)
             {
              cout<<" ";
             } 
             for(k=1;k<=i;k++)
             {
                 cout<<"*";
             }
             cout<<endl;
         
       } 
 }