#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F first
#define S second
#define PI 3.14159

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        bool ans = true;
        int a[101];
        for (int i = 0; i <= 100; i++)
            a[i] = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            a[c]++;
        }
        for (int i = 1; i <= 100; i++)
        {
            if (a[i - 1] < a[i])
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/
