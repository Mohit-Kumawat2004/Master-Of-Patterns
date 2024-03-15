#include<iostream>
using namespace std;
int main()
{
    // Inverted Triange Pattern 
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int i, j;
    
    //For reverse start loop from total size of triangle and decrement the value of i
    for(i=n; i>=1; i--)
    {
        //For Space same code
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        //Star print from last 
        for(j=1; j<=i; j++){
            
            //Add space after star to print a triangle 
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/*

Output : 

Enter Number : 8

* * * * * * * * 
 * * * * * * * 
  * * * * * * 
   * * * * * 
    * * * * 
     * * * 
      * * 
       * 

*/