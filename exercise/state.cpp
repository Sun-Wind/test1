#include<iostream>
#include<utility>
using namespace std;
typedef long long ll;
#define fi(a,b) for(int i = a; i <= b; ++i)
#define fr(a,b) for(int i = a; i >= b; --i)
using pii = pair<int,int>;
int n,m;
const int N = 12;
int st[1 << N];

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
while(cin >> n >> m, n || m)
{
    fi(0,1 << n)
    {
        int cnt = 0;
        for(int j = 0;  j < n; ++j)
        {
            if(i >> j & 1)
            {
            if(cnt & 1 )
                
            }
            else
            cnt++;
        }
    }
}
return 0;
}