#include <iostream>
using namespace std;

int main()
{
    //Easiest Logic Explained.
    //when sum of i and j is divisible by 2 then print 0 else print 1
    //at first point i=1 and j=1 then 1+1%2 = 0 ,  So print 0
    //second i=2 and j=1 then 2+1%2 = 1 as remainder so print 1 and so on ........
    
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
           //If condition is true then print 0 and 1 else print white spaces 
            cout << ((i+j)% 2) << " ";
        }
        cout << endl;
    }
    return 0;
}


/* 

Output : 

0 
1 0 
0 1 0 
1 0 1 0 
0 1 0 1 0 

*/