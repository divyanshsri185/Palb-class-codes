#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 0;

    for (int i = 1; i < ; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    for (int i = 0; i < pos; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}