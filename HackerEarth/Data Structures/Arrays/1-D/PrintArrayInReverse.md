#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" ";
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

int main()
{
	fastio;
	int n;
	cin>>n;
	int a[n];
	read(a, n);
	//reverse(a, a+n);
	for(int i=n-1; i>=0; i--)
	    cout<<a[i]<<endl;
	
  	return 0;
}