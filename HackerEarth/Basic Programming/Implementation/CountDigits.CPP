#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

int main()
{
    fastio;
    int cnt[10] = {0};
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
        cnt[s[i] - '0']++;
    
    for(int i=0; i<10; i++)
        cout<<i<<" "<<cnt[i]<<endl;
        
    return 0;
}