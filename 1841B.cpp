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

        vector<int> v;

        string ans = "";
        bool isDecrease = false;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i == 0)
            {
                v.pb(a);
                ans += '1';
            }
            else
            {
                if (isDecrease)
                {
                    if (a <= v[0] && v[v.size() - 1] <= a)
                    {
                        v.pb(a);
                        ans += '1';
                    }
                    else
                        ans += '0';
                }
                else
                {
                    if (a <= v[0] && v[v.size() - 1] > a)
                    {
                        isDecrease = true;
                        ans += '1';
                        v.pb(a);
                    }
                    else
                    {
                        if (v[v.size() - 1] <= a)
                        {
                            v.pb(a);
                            ans += '1';
                        }
                        else
                            ans += '0';
                    }
                }
            }
        }

        cout << ans << '\n';
    }
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/