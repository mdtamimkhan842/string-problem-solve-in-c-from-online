#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char arr[500];
    gets(arr);
    int i;
    int length = strlen(arr);



    for (i=0; i<length; i++)
    {
        arr[i+1]=arr[i];
    }

    cout<<arr;


    return 0;
}
