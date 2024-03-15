#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 4;

    for(int i = 1 - n; i < n; i++)
    {
        for(int j = 1 - n; j < n; j++)
        {
            if(abs(i) > abs(j))
                cout << abs(i) + 1 << " ";
            else
                cout << abs(j) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}


/* 
Output: 

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4 
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/