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
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]!='7'&&s[i]!='4'){cout<<"NO";return 0;}
        else if(i<n/2)c+=s[i];
        else c-=s[i];
    }
    if(!c)cout<<"YES";
    else cout<<"NO";
    return 0;
}