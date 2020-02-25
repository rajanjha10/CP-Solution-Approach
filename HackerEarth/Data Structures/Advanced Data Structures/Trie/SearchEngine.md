#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(a, n) for(LL e=0; e<n; e++) cout<<a[e]<<" "; cout<<endl;
#define read(a, n) for(LL e=0; e<n; e++) cin>>a[e];
using namespace std;

struct trieNode{
    struct trieNode *children[26];
    LL weight;
    trieNode(LL w){
        weight = w;
        for(int i=0; i<26; i++)
            children[i] = NULL;
    }
};

void insert(trieNode *root, LL weight, string word){
    trieNode *crawl = root;
    int index;
    for(LL i=0; i<word.length(); i++){
        index = word[i] - 'a';
        if(!crawl->children[index])
            crawl->children[index] = new trieNode(weight);
            
        crawl = crawl->children[index];
        crawl->weight = max(crawl->weight, weight);
    }
    
}

LL query(trieNode *root, string prefix){
    trieNode *crawl = root;
    
    for(LL i=0; i<prefix.length(); i++){
        int index = prefix[i] - 'a';
        if(!crawl->children[index])
            return -1;
            
        crawl = crawl->children[index];
    }
    
    return crawl->weight;
}

int main()
{
    fastio;
    LL n, q, w;
    string s;
    trieNode *root = new trieNode(-1);
    cin>>n>>q;
    while(n--){
        cin>>s>>w;
        insert(root, w, s);
    }
    while(q--){
        cin>>s;
        cout<<query(root, s)<<endl;
    }
    
    return 0;    
}

//Using Hashmap - Greater Time complexity
int main()
{
    fastio;
    LL n, q, w;
    string s;
    map<string, LL> trie;
    cin>>n>>q;
    while(n--){
        cin>>s>>w;
        string curr = "";
        for(LL i=0; i<s.length(); i++){
            curr+=s[i];
            trie[curr] = max(trie[curr], w);
        }
    }
    while(q--){
        cin>>s;
        if(trie[s]==0)
            cout<<-1<<endl;
        else
            cout<<trie[s]<<endl;
    }
    
    return 0;    
}
