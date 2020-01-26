#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

struct node{
    int data;
    struct node *left, *right;
    node(int val): data(val), left(NULL), right(NULL) {}
};

int diameter(node *ptr, int& ans){
    if(ptr==NULL)
        return 0;
        
    int leftHeight = diameter(ptr->left, ans);
    int rightHeight = diameter(ptr->right, ans);
    
    ans = max(ans, leftHeight + rightHeight + 1);
    
    return (max(leftHeight, rightHeight) + 1);
}

int main()
{
    fastio;
    int t, val, ans=0;
    string s;
    cin>>t>>val;;
    map<string, int> input;
    struct node *root = new node(val);
    t--;
    while(t--){
        cin>>s>>val;
        input[s] =  val;
    }
    for(auto it=input.begin(); it!=input.end(); it++){
        s = it->first;
        struct node *curr = root;
        for(int j=0; j<s.size()-1 && curr; j++){
            if(s[j]=='L')
                curr = curr->left;
            else
                curr = curr->right;
        }
        if(s[s.size()-1]=='L')
            curr->left = new node(it->second);
        else
            curr->right = new node(it->second);
    }
    int heightOfTree = diameter(root, ans);
    cout<<ans<<endl;
    return 0;    
}
