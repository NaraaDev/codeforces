#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

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
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> v;

        if (x == 1 && k == 1)
        {
            cout << "NO\n";
        }
        else if (k == 2 && x == 1 && n % 2 == 1)
        {
            cout << "NO\n";
        }
        else if (x == 1 && k == 2)
        {
            cout << "YES\n";
            cout << n / 2 << '\n';
            for (int i = 0; i < n / 2; i++)
            {
                cout << 2 << ' ';
            }
            cout << '\n';
        }
        else
        {
            if (x == 1 && n % 2 == 1)
            {
                cout << "YES\n";
                cout << (n - 3) / 2 + 1 << '\n';
                cout << 3 << ' ';
                for (int i = 0; i < (n - 3) / 2; i++)
                {
                    cout << 2 << ' ';
                }
                cout << '\n';
            }
            else if (x == 1 && n % 2 == 0)
            {
                cout << "YES\n";
                cout << n / 2 << '\n';
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << ' ';
                }
                cout << '\n';
            }
            else
            {
                cout << "YES\n";
                cout << n << '\n';
                for (int i = 0; i < n; i++)
                {
                    cout << 1 << ' ';
                }
                cout << '\n';
            }
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