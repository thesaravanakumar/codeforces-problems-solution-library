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
    set<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=0&&find(a.begin(),a.end(),x)==a.end()){
            a.insert(x);
        }
    }
    cout<<a.size();
    return 0;
}