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
    int n;
    cin>>n;
    int a[n],stair=0,b[1000],j=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]==1){stair++;b[j++]=a[i-1];}
    }
    b[j++]=a[n-1];
    cout<<stair+1<<endl;
    for(int i=0;i<j;i++)cout<<b[i]<<" ";
    return 0;
}