#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

void build_tree(int node, int start, int end, vector<int>& a, vector<int>& tree){
    if(start==end){
        tree[node] = a[start];
        return;
    }
    
    int mid = (start+end)/2;
    build_tree(2*node+1, start, mid, a, tree);
    build_tree(2*node+2, mid+1, end, a, tree);
    
    tree[node] = min(tree[2*node+1], tree[2*node+2]);
}

int query(int node, int start, int end, int l, int r, vector<int>& tree){
    if(r<start || end<l)
        return INT_MAX;
        
    if(start>=l && end<=r)
        return tree[node];
    
    int mid = (start+end)/2;
    return min(query(2*node+1, start, mid, l, r, tree),
               query(2*node+2, mid+1, end, l, r, tree));
}

void update(int node, int start, int end, int id, int val, vector<int>& tree){
    if(start==end){
        tree[node] = val;
        return;
    }
    
    int mid = (start+end)/2;
    if(id>=start && id<=mid)
        update(2*node+1, start, mid, id, val, tree);
    else
        update(2*node+2, mid+1, end, id, val, tree);
        
    tree[node] = min(tree[2*node+1],tree[2*node+2]);
}

int main()
{
    fastio;
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    vector<int> tree(3*n);
    read(a, n);
    build_tree(0, 0, n-1, a, tree);
    char op;
    int l, r, v;
    while(q--){
        cin>>op;
        if(op=='q'){
            cin>>l>>r;
            cout<<query(0, 0, n-1, l-1, r-1, tree)<<endl;
        }
        else{
            cin>>l>>v;
            a[l-1] = v;
            update(0, 0, n-1, l-1, v, tree);
        }
    }
    
    return 0;    
}

//Incrementing range from l to r with value v
void update_range(int node, int start, int end, int l, int r, int v, vector<int>& tree){
    if(start>end || r<start || end<l)
        return;

    if(start==end){
        tree[node]+=v;
        return;
    }

    int mid = (start+end)/2;
    update_range(2*node+1, start, mid, l , r, v, tree);
    update_range(2*node+2, mid+1, end, l, r, v, tree);

    tree[node] = tree[2*node+1] + tree[2*node+2];
}

//Incrementing range from l to r with value v using lazy propogation
void update_range_lazy(int node, int start, int end, int l, int r, int v, vector<int>& tree, vector<int>& lazy){
    if(lazy[node]!=0){
        tree[node] += (end-start+1)*lazy[node];
        if(start!=end){
            lazy[2*node+1] += lazy[node];
            lazy[2*node+2] += lazy[node];
        }
        lazy[node] = 0;
    }

    if(start>end || r<start || end<l)
        return;

    if(start>=l && end<=r){
        tree[node] += (end-start+1)*v;
        if(start!=end){
            lazy[2*node+1] += v;
            lazy[2*node+2] += v;
        }
        return;
    }

    int mid = (start+end)/2;
    update_range_lazy(2*node+1, start, mid, l, r, v, tree, lazy);
    update_range_lazy(2*node+2, mid+1, end, l, r, v, tree, lazy);

    tree[node] = tree[2*node+1] + tree[2*node+2];
}

int query_lazy(int node, int start, int end, int l, int r, vector<int>& tree, vector<int>& lazy){
    if(start>end || r<start || end<l)
        return 0;

    if(lazy[node]!=0){
        tree[node] += (end-start+1)*lazy[node];
        if(start!=end){
            lazy[2*node+1] += lazy[node];
            lazy[2*node+2] += lazy[node];
        }
        lazy[node] = 0;
    }

    if(start>=l && end<=r)
        return tree[node];

    int mid = (start+end)/2;
    int q1 = query_lazy(2*node+1, start, mid, l, r, tree, lazy);
    int q2 = query_lazy(2*node+2, mid+1, end, l, r, tree, lazy);

    return (q1+q2); 
}

//range minimum query - top coder
//iterative segment tree
//codeforces efficent segment tree
//codeforces segment tree
//emaxx segment tree
//persistent segment tree