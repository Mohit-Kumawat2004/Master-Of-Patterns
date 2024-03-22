#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
            {
                cout << x++ << " ";
            }
            else
            {
                cout << " " << --x;
            }
        }
        x += n;
        cout << endl;
    }
    return 0;
}


/*

Output : 

1 2 3 4 5 
10 9 8 7 6
11 12 13 14 15 
20 19 18 17 16
21 22 23 24 25 


*/
