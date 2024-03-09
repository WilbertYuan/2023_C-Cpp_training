#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
long long ori[1000005], n, ans = 0, l[1000005], r[1000005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> ori[i];
    for (int i = 1; i <= n; i++)
    {
        long long tmp = ori[i] + l[i - 1];
        if (tmp >= 0)
        {
            l[i] = tmp;
        }
        else
        {
            l[i] = 0;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        long long tmp = ori[i] + r[i + 1];
        if (tmp >= 0)
        {
            r[i] = tmp;
        }
        else
        {
            r[i] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, r[i]);
        ans = max(ans, l[i]);

    }
    cout << ans;
    return 0;
}