#include <iostream>
#include<string.h>
using namespace std;
int main()
{ 
    // Name Pattern in Form of Cross
    char arr[]="MOHIT";
    int len = strlen(arr);
    int i,j;
    
    for(i=0; i<len; i++){
        for(j=0; j<=len; j++){
          
            if(i==j || i+j == len-1){
                cout<<arr[j];
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}



/*

Output : 

M       T 
  O   I  
    H    
  O   I  
M       T 



*/
