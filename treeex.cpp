#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define pb push_back
const long long mod = 998244353;
const long long inf = 1e18 + 10;
// int x[]={0,0,-1,1};
// int y[]={-1,1,0,0};
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        for (auto &x : b)
        {
            cin >> x;
        }
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i].ff = b[i];
            v[i].ss = a[i];
        }
        sort(v.begin(), v.end());
        multiset<int> setm;
        double ans = 0;
        int d = 0;
        int taken = 0;
        int i = 0;
        while (inf)
        { // cout << taken << endl;
            // if(i>=n){break;}
            while (i < n && v[i].ff == taken)
            {
                setm.insert(v[i].ss);
                i++;
            }
            if (!setm.size())
            {
                break;
            }
            auto it = setm.end();
            it--;
            d += *it;
            taken++;
            setm.erase(it);
            double r = (double)((double)d / (double)taken);
            // cout << r << " " << taken << endl;
            if (r > ans)
            {
                ans = r;
            }
        }
        cout << setprecision(10) << fixed << ans << endl;
    }
    return 0;
}