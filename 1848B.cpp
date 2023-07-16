#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>

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

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<vector<int> > distance(k + 1);
    int prePosition[k + 1];

    for(int i = 0; i <= k; i++)
        prePosition[i] = 0;

    for (int i = 1; i <= n; i++) {
      int num;
      cin >> num;
      distance[num].push_back(i - prePosition[num] - 1);
      prePosition[num] = i;
    }

    int ans = INT_MAX;
    for (int i = 1; i <= k; i++) {

      distance[i].push_back(n - prePosition[i]);

      sort(distance[i].begin(), distance[i].end(), greater<int>());

      int dist = distance[i][0] / 2;

      if (distance[i].size() >= 2) 
        dist = max(dist, distance[i][1]);
      
      ans = min(ans, dist);
    }

    cout << ans << endl;
  }

}
/*
N - ee shalga
Never Give Up
Сая сая мөрөөдөл минь удахгүй нэг нэгээрэ биелэж эхлэх болно.

Whatever our souls also made of, hers and mine are the same.

People aren’t prison of the fate, they’re prison of thier own mind.
*/