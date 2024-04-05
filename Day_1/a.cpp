#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    string ans="meow";
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        for(char &a:s)
        {
            a=tolower(a);
        }
        string result;
        result=s[0];
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1]) continue;
            else result+=s[i];
            
        }
        if(result==ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}