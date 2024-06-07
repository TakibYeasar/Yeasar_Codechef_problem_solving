
// Problem link ===>>https://www.codechef.com/problems/CMIX
// submission link ===>> https://www.codechef.com/viewsolution/1063615305

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        vector<ll> a(n);
        for (ll i = 0; i < n;i++)
        {
            cin >> v[i] >> a[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i < j)
                {
                    ans = max(ans, (a[i] * v[j]) + (v[i] * a[j]));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}