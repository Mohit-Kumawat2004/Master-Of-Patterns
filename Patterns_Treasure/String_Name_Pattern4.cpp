#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    //The char array to hold the string and print a single char at a time.
    //Inverted String Name Array
    
    
    char arr[] = "MOHIT KUMAWAT";

    int len = strlen(arr);
    int i, j;

    for (i = len - 1 ; i >= 0; i--)
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


M O H I T   K U M A W A T 
M O H I T   K U M A W A 
M O H I T   K U M A W 
M O H I T   K U M A 
M O H I T   K U M 
M O H I T   K U 
M O H I T   K 
M O H I T   
M O H I T 
M O H I 
M O H 
M O 
M 



*/