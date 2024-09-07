
// Problem link ===>> https://www.codechef.com/problems/INDEPENDENCE
// submission link ===>> https://www.codechef.com/viewsolution/1087467918

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t; 
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c; 

        priority_queue<pair<int, char>> pq;
        if (a > 0)
        {
            pq.push({a, 'O'});
        }
        if (b > 0)
        {
            pq.push({b, 'W'});
        }
        if (c > 0)
        {
            pq.push({c, 'G'});
        }

        string ans = "";
        bool possible = true;

        while (!pq.empty())
        {
            auto top1 = pq.top();
            pq.pop();

            if (ans.empty() || ans.back() != top1.second)
            {
                ans += top1.second;
                top1.first--;

                if (top1.first > 0)
                {
                    pq.push(top1);
                }
            }
            else
            {
                if (pq.empty())
                {
                    possible = false;
                    break;
                }

                auto top2 = pq.top();
                pq.pop();

                ans += top2.second;
                top2.first--;

                if (top2.first > 0)
                {
                    pq.push(top2);
                }

                pq.push(top1);
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
