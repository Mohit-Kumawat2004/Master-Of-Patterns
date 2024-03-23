#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //The char array to hold the string and print a single char at a time.
    //Reverse String Order in Rectangle Pattern 
    
    
    char arr[] = "MOHIT";

    int len = strlen(arr);
    int i, j;

    for (i = 0; i < len; i++)
    {
        for (j = 1; j <= len; j++)
        {
            cout << arr[len - j] << " ";
        }
        cout << endl;
    }

    return 0;
}



/*


Output : 


T I H O M 
T I H O M 
T I H O M 
T I H O M 
T I H O M 



*/