
// Problem link ===>>https://www.codechef.com/START152D/problems/MNR
// submission link ===>> https://www.codechef.com/viewsolution/1090690503

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if (n <= 3)
        {
            cout << 0 << endl;
            continue;
        }

        int result = min({
            a[n - 1] - a[2],
            a[n - 3] - a[0],
            a[n - 2] - a[1],
            a[n - 1] - a[0]
        });

        cout << result << endl;
    }
    return 0;
}