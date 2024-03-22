#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int n = 5;
    int r;
    int cn = 1, count;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = cn + 1; k <= 10000; k++) {
                cn = k;
                count = 0;
                for (r = 1; r <= cn; r++) {
                    if (cn % r == 0)
                        count++;
                }
                if (count == 2) {
                    cout << setw(3) << cn;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}



/*


Output:

  2  3  5  7 11
 13 17 19 23 29
 31 37 41 43 47
 53 59 61 67 71
 73 79 83 89 97


*/