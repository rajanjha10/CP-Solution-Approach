#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

struct node{
    LL data;
    struct node *left, *right;
    node(LL val): data(val), left(NULL), right(NULL) {}
};

node* insert(node *root, LL val){
    if(root==NULL)
        return (new node(val));
    
    if(root->data >= val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
        
    return root;
}

node* search(node *root, LL val){
    if(root==NULL || root->data == val)
        return root;
        
    if(root->data >= val)
        return search(root->left, val);
    else
        return search(root->right, val);
}

void preorder(node *root){
    if(root){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    fastio;
    int n;
    node *root = NULL;
    LL val;
    cin>>n;
    while(n--){
        cin>>val;
        root = insert(root, val);
    }
    cin>>val;
    root = search(root, val);
    preorder(root);
    
    return 0;    
}
