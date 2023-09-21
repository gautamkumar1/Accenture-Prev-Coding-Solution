#include <iostream>
#include <climits>
using namespace std;

struct TreeHeight
{
    int feets;
    int inches;
};

int TallestTree(struct TreeHeight *arr, int n)
{
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].feets;
        cin >> arr[i].inches;

        // Convert the height to inches
        int height = (12 * arr[i].feets) + arr[i].inches;
        ans = max(ans,height);
    }
    
    return ans;
}

int main()
{
    int n = 4;
    TreeHeight arr[n];
    int tallest = TallestTree(arr, n);
    cout<<tallest<<endl;

    return 0;
}
