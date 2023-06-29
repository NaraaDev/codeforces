#include <iostream>
#include <math.h>
#include <algorithm>

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
        int xA, yA, xB, yB, xC, yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;

        int ans1 = 0, ans2 = 0;

        if ((yA > yB && yA > yC) || (yA < yB && yA < yC))
        {
            if (yA <= yB)
                ans2 = min(yB, yC) - yA;
            else
                ans2 = yA - max(yB, yC);
        }

        if ((xB > xA && xC > xA) || (xB < xA && xC < xA))
        {
            if (xA <= xB)
                ans1 = min(xB, xC) - xA;
            else
                ans1 = xA - max(xB, xC);
        }

        cout << ans1 + ans2 + 1 << '\n';
    }
}

/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/