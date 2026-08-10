#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 5, 9, 78, 63, 54};
    int min = INT16_MAX;
    int max = INT16_MIN;

    for (int i = 0; i < 6; i++) 
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
    return 0;
}