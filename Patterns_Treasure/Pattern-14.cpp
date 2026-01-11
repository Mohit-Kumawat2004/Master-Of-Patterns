#include <iostream>
using namespace std;

int main() {
    int n = 9; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || i == j || i == n) {
                std::cout << "*";
            } else {
                std::cout << " "; // 2ws
            }
        }
        cout << endl;
    }
    return 0;
}



/*


Output:

*        
**       
* *      
*  *     
*   *    
*    *   
*     *  
*      * 
*********



*/
