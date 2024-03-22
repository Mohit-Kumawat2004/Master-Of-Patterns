#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;


int main()
{
    char str[] = "MOHIT";
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            cout<<str[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 


/*

Output : 


M O H I T 
M O H I T 
M O H I T 
M O H I T 
M O H I T 



"/