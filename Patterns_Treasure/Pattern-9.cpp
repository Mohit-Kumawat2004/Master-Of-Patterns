#include<iostream>
using namespace std;
#include <math.h>

int main()
{
    //Using Absolute Value Function
    int n = 4;

    for(int i = n; i >= -n; i--)
    {
        for(int j = n; j >= abs(i); j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*

Output : 

*
**
***
****
*****
****
***
**
*


*/
