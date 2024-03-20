#include<iostream>
using namespace std;

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            //change i to j because pattern has vertical numbers
            cout << (j % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
 Output : 

1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 


*/