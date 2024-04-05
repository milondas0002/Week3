#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        ll total=0, min_change=0;
        vector<ll> dispatch;
        for(int i=0; i<n; i++)
        {
            ll l=i, r=n-i-1;
            if(s[i]=='L')
            {
                if(r>l)
                {
                    min_change++;
                    total+=r;
                    dispatch.push_back(r-l);
                }
                else total+=l;
            }
            else
            {
                if(l>r)
                {
                    min_change++;
                    total+=l;
                    dispatch.push_back(l-r);
                }
                else total+=r;
            }
        }
        vector<ll> ans(n+1);
        for(int i=min_change; i<=n; i++) ans[i]=total;
        sort(dispatch.begin(), dispatch.end(), greater<ll>());
        for(int i=min_change-1; i>=1; i--)
        {
            total-=dispatch.back();
            dispatch.pop_back();
            ans[i]=total;
        }
        for(int i=1; i<ans.size(); i++) cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}