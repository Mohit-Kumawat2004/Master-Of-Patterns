#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
    int n = 5;
 
    for (int i = 1; i <= n; i++) 
    {
       for (int j = 1; j <= n; j++)
       {
            cout <<abs(i-j) << " ";
       }
            cout << endl;
    }
  
  return 0;
}


/*


Output:

0 1 2 3 4 
1 0 1 2 3 
2 1 0 1 2 
3 2 1 0 1 
4 3 2 1 0 



*/
