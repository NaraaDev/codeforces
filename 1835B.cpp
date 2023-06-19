#include <iostream>

#define ll long long
#define pb push_back
#define F first
#define S second
#define PI 3.14159

using namespace std;

ll solve(ll n, ll k, ll g)
{
    if (k * g - (((g + 1) / 2) - 1) * n < 0)
    {
        return k * g;
    }
    return k * g - ((((k * g - (((g + 1) / 2) - 1) * n + g - 1) / g) * g));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, g;
        cin >> n >> k >> g;
        cout << solve(n, k, g) << "\n";
    }

    return 0;
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/