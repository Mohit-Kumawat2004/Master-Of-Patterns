#include<iostream>
using namespace std;

int main()
{
    /* Easiest Logic Explained Again
       When sum of i and j is divisible by 2 then print 0 else print 1
   Same logic but this time starting is from 1 so we will start the J loop from 0 so that divisibility is set to 1 onwards
    At first point i=1 and j=0 then 1+0%2 = 1 print 1
    Secondly i=2 and j=0 then 2+0%2 = 0 so print 0 and so on ........
*/


    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        //Change in inner Loop , start from 0 to i
        for(int j = 0; j < i; j++)
        {
           //If true then print 0 and 1 else print white spaces 
            cout << ((i+j)% 2) << " ";
        }

        cout << endl;
    }

    return 0;
}

/* 

Output : 

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/