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
    int n,e=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)if(s[i]=='8')e++;
    if(e>=n/11)cout<<n/11;
    else cout<<e;
    return 0;
}