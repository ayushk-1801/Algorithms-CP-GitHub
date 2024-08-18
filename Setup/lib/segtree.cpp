#include <bits/stdc++.h>
using namespace std;

vector<int> tree;

int f(int node, int node_low, int node_high, int query_low, int query_high){
    if(query_low <= node_low && node_high <= query_high){
        return tree[node];
    }
    if(node_high < query_low || node_low > query_high){
        return 0;
    }
    int last_in_left = (node_low+node_high)/2;
    return f(2*node, node_low, last_in_left, query_low, query_high)
           +   f(2*node + 1, last_in_left+1, node_high, query_low, query_high);
}

void change(int delta, int i, int n){
    tree[n+i] = delta;

    for(int j = (n+i)/2; j >= 1; j/=2){
        tree[j] = tree[2*j] + tree[2*j+1];
    }

}

// while(n & (n-1)){
//     a.push(0);
//     ++n;
// }
//
// tree.resize(2*n);
//
// for(int i = 0; i < n; ++i){
    // tree[n+i] = a[i];
// }
// for(int i = n-1; i >= 1; --i){
    // tree[i] = tree[2*i] + tree[2*i+1];
// }

