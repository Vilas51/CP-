#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i, a, b) for (ll i = a; i <= b; i++)
#define ff(i, a, b) for (ll i = a; i >= b; i--)
#define mod 1000000007
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    string ans = "";
    for (int i = 0; i < m; i++)
    {
        if (s.find(v[i]) == s.end() && s.size() >= n - 1 || s.find(v[i]) != s.end() && s.size() == n)
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
