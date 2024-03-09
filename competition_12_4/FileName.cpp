#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool vis[30] = { false };
bool lr[30] = { false };
bool fr[30] = { false };

int cnt = 0;
const int n = 8;


bool judge(int x, int y)
{
    if (vis[y] || lr[y - x + n] || fr[x + y])
        return false;
    return true;
}
int arr[8] = { 0 };
void dfs(int x)
{
    
    
    
    if (x == n)
    {
        cnt++;
        for (int i = 0; i < 8; i++)
        {
            printf("%d", arr[i]);
        }
        printf(",");
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!judge(x, i))
            continue;
        arr[x] = i;
        vis[i] = true;
        lr[i - x + n] = true;
        fr[x + i] = true;
        dfs(x + 1);
        vis[i] = false;
        lr[i - x + n] = false;
        fr[x + i] = false;
    }
    
    return;
}
int main()
{
    dfs(0);
    cout << cnt << endl;
    return 0;
}

