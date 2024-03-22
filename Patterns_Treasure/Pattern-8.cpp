#include <iostream>
using namespace std;

// Diamond Pattern 

int main()
{
 
    int n = 5;
    int i,j;
    for(i=1; i<=n; i++)
    {
        //for Space same code
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        //normal Loop from 1 to n 
        for(j=1; j<=i; j++){
            
            //add space after star to print a triangle 
            cout<<"* ";
        }
        cout<<endl;
    }
     
/* Downward Portion diamond logic */
    for(i=n-1; i>=1; i--)
    {
        //for Space same code
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        //normal Loop from 1 to n 
        for(j=1; j<=i; j++){
            
            //add space after star to print downward portion of triangle 
            cout<<"* ";
        }
        cout<<endl;
    }

   return 0;
    
}

/* 

Output : 


    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/    
