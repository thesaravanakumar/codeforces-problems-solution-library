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
    string s(10,'0');
    char c;
    while(n--){
        cin>>c;
        if(c=='L')s[s.find('0')]='1';
        else if(c=='R')s[s.rfind('0')]='1';
        else s[c-48]='0';
    }
    cout<<s;
    return 0;
}