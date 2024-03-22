#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
            {
                cout << j << " ";
            }
            else
            {
                cout << (n - j + 1) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*

Output : 

1 2 3 4 5 
5 4 3 2 1 
1 2 3 4 5 
5 4 3 2 1 
1 2 3 4 5 

*/
