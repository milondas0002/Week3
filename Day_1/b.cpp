#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, q;
    cin >> t;
    while(t--) {
        cin >> n >> q;
        vector<ll> a(n+1, 0), prefix_sum(n+1, 0);
        for(ll i=1; i<=n; i++) cin >>a[i];
        for(ll i=1; i<=n; i++) prefix_sum[i]=prefix_sum[i-1]+a[i];
        while(q--) {
            ll l, r, k, sum;
            cin >> l >> r >> k;
            sum=prefix_sum[n];
            sum-=prefix_sum[r]-prefix_sum[l-1];
            sum+=((r-l+1)*k);
            if(sum%2==0) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}
