#include<iostream>
#include<vector>
using namespace std;


int main()
{

 int arr[10]={1};
 for(int i=0;i<10;i++)
 {
    cout<<arr[i]<<" " <<endl;
 }

        //    sizeof concept

        int arr1[10]={1,2,3,4,5,6,7,8,9,10};
       int n=sizeof(arr1)/sizeof(arr1[0]);
          cout<<"size of the array is:"<<n<<endl;
       return 0;
}