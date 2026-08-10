#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 5, 9, 78, 63, 54};
   int n=6;
   for(int i=0;i<n;i++)
   {
       swap(arr[i],arr[ n-i-1]);
   }
   cout<<"Array after reversing :"<<endl;
   for( int x:arr)
      
   {
    cout<<x<<endl;
   }




    return 0;
}