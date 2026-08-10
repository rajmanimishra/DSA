#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 5, 9, 78, 63, 54};
    int key=9;
    int n=sizeof(arr)/sizeof(arr[0]);

    for( int i=0;i<n;i++)
    { 
        if(arr[i]==key)
        {
            cout<<"Element found at index :"<<i<<endl;
            break;
        }

    }
    return 0;
}