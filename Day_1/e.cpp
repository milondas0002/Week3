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
        int a[n][n-1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin >> a[i][j];
            }
        }
        map<int, int> frequency;
        for(int i=0; i<n; i++)
        {
            frequency[a[i][n-2]]++;
        }
        int min_frequency=INT_MAX;
        int min_frequency_element=-1;
        for(auto &it:frequency)
        {
            if(it.second<min_frequency)
            {
                min_frequency=it.second;
                min_frequency_element=it.first;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i][n-2]==min_frequency_element)
            {
                for(int j=0; j<n-1; j++) 
                {
                    cout << a[i][j] << " ";
                }
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i][n-2]!=min_frequency_element)
            {
                cout << a[i][n-2] << "\n";
                break;
            }
        }
    }
    return 0;
}