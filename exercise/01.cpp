#include<iostream>
#include<utility>
using namespace std;
typedef long long ll;
#define fi(a,b) for(int i = a; i <= b; ++i)
#define fr(a,b) for(int i = a; i >= b; --i)
using pii = pair<int,int>;
int n,m;
int dp[1005];
int w[1005];
int v[1005];
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cin >> n >> m;
fi(1,n)
    cin >> w[i] >> v[i];
for(int j = 1; j <= m; ++j)
fr(m,1)
if(i >= w[j])
dp[i] = max(dp[i], dp[i - w[j]] + v[j]);
cout << dp[m] << endl;
return 0;
}