#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[]="MOHIT";
    int len=strlen(str);
    int i,j;

    for (i=0; i<len; i++)
    {

        for (j=0; j<len; j++)
        {
           
            if (i==len/2)
                cout<<str[j]<<" ";

            else if (j==len/2)
                cout<<str[i]<<" ";

            else
                cout<<" "; //2ws

        }

        cout<<endl;
    }

    return 0;
}



/*

Output : 

    M   
    O   
M O H I T 
    I   
    T   


*/