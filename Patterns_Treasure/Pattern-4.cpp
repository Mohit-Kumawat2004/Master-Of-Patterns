#include <iostream>
using namespace std;

int main() {
    
    //Inverted Triangele Pattern
    int n;

    cout << "Enter number : ";
    cin >> n;

    //Starting from size 
    for(int i = n; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

/* 
Output : 

Enter number : 5

* * * * *
* * * *
* * * 
* *
*

*/
