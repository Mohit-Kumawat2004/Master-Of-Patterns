#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char arr[] = "MOHIT";
    int len = strlen(arr);

    for(int i = 0; i < len; i++)
    {

        for(int j = i; j >= 0; j--)
        {
            cout<<" "; // White Spaces 
        }

        for(int j = 0; j < len - i; j++)
        {
            cout<<arr[j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}



/*

Output : 


 M O H I T 
  M O H I 
   M O H 
    M O 
     M 


*/