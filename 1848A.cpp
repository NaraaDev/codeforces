#include<iostream>
#include<math.h>
#include<algorithm>

#define ll long long
#define pb push_back
#define F first
#define S second
#define PI 3.14159

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n,m,k, x,y;
        cin >> n >> m >> k;
        cin >> x >> y;
        int a[k], b[k];
        for(int i = 0; i < k; i++)
            cin >> a[i] >> b[i];
        
        bool ans = true;   

        for(int i = 0; i < k; i++) {

            int dx = abs(x - a[i]), dy = abs(y - b[i]);

            if((dx + dy) % 2 == 0) {
                ans =  false;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");

    }

}