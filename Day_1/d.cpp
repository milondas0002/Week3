#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<string>a(n);
        map<string, bool> m;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            m[a[i]]=true;
        }
        for(int i=0; i<n; i++)
        {
            bool flag=false;
            for(int j=1; j<a[i].size(); j++)
            {
                string s1=a[i].substr(0, j);
                string s2=a[i].substr(j, a[i].size()-j); 
                if(m[s1] && m[s2]) 
                {
                    flag=true;
                    break;
                }
            }
            cout << (flag?1:0); 
        }
        cout << endl;
    }
    return 0;
}
