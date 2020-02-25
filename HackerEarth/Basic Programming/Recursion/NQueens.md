#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

int board[10][10] = {0};

bool is_attacked(int x, int y, int n){
    for(int i=0; i<n; i++){
        if(board[x][i])
            return true;
        if(board[i][y])
            return true;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j == x+y) && board[i][j])
                return true;
            if((i-j == x-y) && board[i][j])
                return true;
        }
    }
    
    return false;
}

bool N_Queens(int size, int n){
    if(size==0)
        return true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(is_attacked(i, j, n))
                continue;
            board[i][j] = 1;
            if(N_Queens(size-1, n))
                return true;
            board[i][j] = 0;
        }
    }
    
    return false;
}

int main()
{
    fastio;
    int n;
    cin>>n;
    bool flag = N_Queens(n, n);
    if(flag){
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout<<board[i][j]<<" ";
            cout<<endl;
        }
    }
    else
        cout<<"NO"<<endl;

    return 0;
}

//Less Running Time Solution
bool N_Queens(int col, int n){
    if(col>=n)
        return true;
    for(int i=0; i<n; i++){
        if(is_attacked(i, col, n))
            continue;
        board[i][col] = 1;
        if(N_Queens(col+1, n))
            return true;
        board[i][col] = 0;
    }
    
    return false;
}