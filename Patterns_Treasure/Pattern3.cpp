#include<bits/stdc++.h>

using namespace std;

int main() {

  //Hollow Rectangle Program
  int r;  //rows 
  int c; //columns 
  
  cout << "Enter the number of rows in rectangle - ";
  cin >> r;

  cout << "Enter the number of columns in rectangle - " ;
  cin >> c;

  cout << "Rectangle of dimensions " << r << "*" << c << endl;
 
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {

      // If the index is at the border, then print * 
      if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
        cout << "* ";
    
    //else print spaces for hollow rectangle 
      else
        cout << "  ";
    }
    cout << endl;
  }

  return 0;
}

/* 
Output : 


Enter the number of rows in rectangle - 4
Enter the number of columns in rectangle - 6
Rectangle of dimensions 4*6

* * * * * * 
*         * 
*         * 
* * * * * * 
 
*/