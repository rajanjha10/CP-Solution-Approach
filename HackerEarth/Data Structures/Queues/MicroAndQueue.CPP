#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

void enqueue(int queue[], int *rear, int val){
    queue[*rear] = val;
    *rear = *rear + 1;
}

int dequeue(int queue[], int *front){
    *front = *front + 1;
    return queue[*front-1]; 
}

int size(int queue[], int front, int rear){
    return rear - front;
}

bool empty(int queue[], int front, int rear){
    return front==rear;
}

int main()
{
    fastio;
    int n;
    cin>>n;
    int queue[n];
    int front = 0, rear = 0, val;
    char op;
    while(n--){
        cin>>op;
        if(op=='E'){
            cin>>val;
            enqueue(queue, &rear, val);
            cout<<size(queue, front, rear)<<endl;
        }
        else{
            if(empty(queue, front, rear))
                cout<<-1<<" "<<0<<endl;
            else{
                cout<<dequeue(queue, &front)<<" ";
                cout<<size(queue, front, rear)<<endl;
            }
        }
    }
    
    return 0;    
}
