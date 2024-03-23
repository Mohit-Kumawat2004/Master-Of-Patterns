#include <iostream>
using namespace std;

int main() {
    /*  Best Suits For Odd Numbers and is a constant Type of Pattern  */
    
    int n = 13;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == n / 2 + 1 || j == n / 2 + 1 ||
                (i == 1 && j >= n / 2 + 1) ||
                (i == n && j <= n / 2) ||
                (j == 1 && i<=n/2+1) ||
                (i>=n / 2 + 1 && j == n)) {
                cout << "* ";
            } else {
                cout << "  "; // White spaces
            }
        }
        cout << endl;
    }

    return 0;
}



/*


Output : 


*           * * * * * * * 
*           *             
*           *             
*           *             
*           *             
*           *             
* * * * * * * * * * * * * 
            *           * 
            *           * 
            *           * 
            *           * 
            *           * 
* * * * * * *           *



*/