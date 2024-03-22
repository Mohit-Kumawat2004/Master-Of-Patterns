#include<iostream>
using namespace std;
int main()
{
    //Basic Triangle Pattern 
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int i, j;
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
    return 0;
}


/*

Output : 

Enter Number : 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/
