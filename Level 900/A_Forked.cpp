#include <bits/stdc++.h>
using namespace std;

#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

void solve(){

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = 0;
    int dx[] = {a, a,-a,-a, -b, -b, b, b};
    int dy[] = {b, -b, b, -b, -a, a, -a, a};
    map<pair<int,int>, int> mpp,vpp;
    for (int i = 0; i < 8; i++){
        mpp[{c+dx[i],d+ dy[i]}]++;
        vpp[{e+dx[i],f+ dy[i]}] = 1;
    }
    for(auto it : mpp){
        if(vpp[it.first]!=0) ans++;
    }
    cout << ans << endl;
}

int32_t main()
{
    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }
    return 0;
}