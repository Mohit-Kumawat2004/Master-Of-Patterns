#include<iostream>
using namespace std;
int main()
{
    //Opposite Right Angle Pattern 
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int i, j;
    for(i=1; i<=n; i++)
    {
        //For Space 
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        //Star print from last 
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*

Output : 

Enter Number : 8
       *
      **
     ***
    ****
   *****
  ******
 *******
********

*/