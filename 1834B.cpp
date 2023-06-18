#include <bits/stdc++.h>

using namespace std;

void printAns(string a, string b)
{

    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
        ans += abs((a[i] - '0') - (b[i] - '0'));
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string l, r;
        cin >> l >> r;

        if (l == r)
        {
            cout << 0 << '\n';
            continue;
        }

        string low = "";
        for (int i = l.size(); i < r.size(); i++)
            low += "0";

        low += l;

        int pos = 0;
        for (int i = 0; i < low.size(); i++)
        {
            if (low[i] - '0' < r[i] - '0')
            {
                pos = i + 1;
                break;
            }
        }
        for (int i = pos; i < low.size(); i++)
        {
            low[i] = '9';
            r[i] = '0';
        }
        printAns(low, r);
    }
}