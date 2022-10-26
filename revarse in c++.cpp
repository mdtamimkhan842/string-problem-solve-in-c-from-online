#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char arr[500];
    gets(arr);
    int i,j,temp;
    int length = strlen(arr);
    cout<<length<<endl;

  cout<<"Reverse string is : " <<strrev(arr)<<endl;

    return 0;
}
