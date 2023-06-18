#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        int ans = 0, sum = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt += a[i] == -1;
            sum += a[i];
        }

        if (sum < 0)
        {
            ans += abs(sum) / 2 + abs(sum) % 2;
            cnt -= abs(sum) / 2 + abs(sum) % 2;
        }
        if (cnt % 2)
        {
            ans++;
        }

        cout << ans << '\n';
    }
}