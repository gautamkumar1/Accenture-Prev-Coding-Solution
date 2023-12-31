#include <iostream>
using namespace std;

void rearrange_alternate_positions(int arr[], int n)
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        if (temp > 0)
            continue;
        j = i - 1;
        while (arr[j] > 0 && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n, i;
    cout << "\nEnter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nOriginal array : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    rearrange_alternate_positions(arr, n);
    cout << "\nRearranged array : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}