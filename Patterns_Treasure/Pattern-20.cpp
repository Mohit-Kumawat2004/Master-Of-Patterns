#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 5;
    
    for(int i=1 ; i<=n ; i++){
      for(int j=1 ; j<=n ; j++){
        if(i<=n/2){
          cout << "0";
        }
        else{
          cout << "1";
        }
      }
      
      cout <<endl;
    }
    return 0;
}


/*


Output:

0 0 0 0 0 
0 0 0 0 0 
1 1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 



*/ 
    