#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

void max_heapify(vector<LL> &heap, LL i){
    LL left = 2*i + 1;
    LL right = 2*i + 2;
    LL largest = i, n = heap.size();
    if(left<n && heap[left] > heap[largest])
        largest = left;
    if(right<n && heap[right] > heap[largest])
        largest = right;
        
    if(largest!=i){
        swap(heap[i], heap[largest]);
        max_heapify(heap, largest);
    }
}

void build_maxheap(vector<LL> &heap){
    LL n = heap.size();
    for(LL i=n/2-1; i>=0; i--)
        max_heapify(heap, i);
}

void insert(vector<LL> &heap, LL val){
    heap.emplace_back(val);
    LL i = heap.size()-1;
    while(i>0 && heap[(i-1)/2] < heap[i]){
        swap(heap[(i-1)/2], heap[i]);
        i = (i-1)/2;
    }
}

int main()
{
    fastio;
    LL n, q, val;
    int op;
    cin>>n;
    vector<LL> heap(n);
    read(heap, n);    
    
    build_maxheap(heap);
    
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>val;
            insert(heap, val);
        }
        else
            cout<<heap[0]<<endl;
    }
    
    return 0;    
}
