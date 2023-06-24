#include <iostream>

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
        int n, x;
        cin >> n >> x;

        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        bool ans = false;
        ll num = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & x) == a[i])
            {
                num |= a[i];
            }
            else
            {
                break;
            }
        }

        if (num == x)
            ans = true;

        for (int i = 0; i < n; i++)
        {
            if ((b[i] & x) == b[i])
            {
                num |= b[i];
            }
            else
            {
                break;
            }
        }

        if (num == x)
            ans = true;

        for (int i = 0; i < n; i++)
        {
            if ((c[i] & x) == c[i])
            {
                num |= c[i];
            }
            else
            {
                break;
            }
        }

        if (num == x)
            ans = true;

        cout << (ans ? "Yes\n" : "No\n");
    }
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/