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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        ll first = 0, second = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            first += a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            second += b[i];
        }

        cout << (first == second ? "Draw\n" : first > second ? "Tsondu\n"
                                                             : "Tenzing\n");
    }
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/