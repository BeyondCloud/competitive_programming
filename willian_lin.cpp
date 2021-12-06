#include "common/utils.hpp"
void solve()
{
    ll n, c, d, f;
    read(n, c, d, f);
    string s;
    read(s);
    print(n, c, d, f);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    read(t);
    FOR(t)
    {
        //write("Case #", i+1, ": ");
        solve();
    }
}