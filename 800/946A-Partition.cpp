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
    int n,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        (x>0)?sum1+=x:sum2+=x;
    }
    cout<<sum1-sum2;
    return 0;
}