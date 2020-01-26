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
	int n, m, i, j;
	cin>>n>>m;
	vector<vector<int> > a(n, vector<int>(m));
	for(i=0; i<n; i++)
	    read(a[i], m);
	
	for(i=0; i<m; i++){
	    for(j=0; j<n; j++)
	        cout<<a[j][i]<<" ";
        cout<<endl;
	}
	
  	return 0;
}