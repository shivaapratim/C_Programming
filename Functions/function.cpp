#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 1};
    int ans = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                ans += arr[i] + arr[j] + arr[k];

    cout << ans;

    return 0;
}