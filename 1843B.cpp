#include <iostream>
#include <math.h>

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
        int a[n];

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int pos = -1;

            if (a[i] < 0)
            {
                ans++;
                pos = i;
                while (a[pos] <= 0 && pos < n)
                {
                    pos++;
                }
                i = pos;
            }
        }
        cout << sum << " " << ans << '\n';
    }
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/
