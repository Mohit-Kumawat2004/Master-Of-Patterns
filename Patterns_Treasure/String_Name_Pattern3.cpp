#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //The char array to hold the string and print a single char at a time.
    
    char arr[] = "MOHIT KUMAWAT";

    int len = strlen(arr);
    int i, j;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}


/*

Output : 

M 
M O 
M O H 
M O H I 
M O H I T 
M O H I T   
M O H I T   K 
M O H I T   K U 
M O H I T   K U M 
M O H I T   K U M A 
M O H I T   K U M A W 
M O H I T   K U M A W A 
M O H I T   K U M A W A T 




*/

