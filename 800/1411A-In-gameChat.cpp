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
    w(t){
        int n,q=0,w=0,temp=1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'&&temp)q++;
            else{
                temp=0;
                w++;
            }
        }
        if(q>w)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}