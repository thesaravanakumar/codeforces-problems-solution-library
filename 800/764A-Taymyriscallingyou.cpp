#include              <bits/stdc++.h>
#define ll            long long int
#define w(t)          int t; cin>>t; while(t--)
#define F             first
#define S             second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define mii           map<int,int>
#define sp(x,y)       fixed<<setprecision(y)<<x
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,z,sum=0;
    cin>>n>>m>>z;
    for(int i=n;i<=z;i+=n){
        for(int j=m;j<=z;j+=m){
            if(i==j)sum++;
        }
    }
    cout<<sum;
    return 0;
}