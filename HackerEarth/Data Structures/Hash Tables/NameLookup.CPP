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
    int n, q, r;
    string s;
    map<int, string> a;
    cin>>n;
    while(n--){
        cin>>r>>s;
        a[r] = s;
    }
    cin>>q;
    while(q--){
        cin>>r;
        cout<<a[r]<<endl;
    }
    
    return 0;    
}
