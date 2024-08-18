#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> edges[n];

    int edgecnt; 
    cin >> edgecnt; 

    int fst, snd;
    for(int i = 0; i < edgecnt; ++i){
        cin >> fst >> snd;
        edges[fst].push_back(snd);
        edges[snd].push_back(fst);
    }

    bool visited[n];
    for(int i = 0; i < n; ++i){

        visited[i] = false;
        
    }
    int distance[n];
    for(int i = 0; i < n; ++i){

        distance[i] = 0;
        
    }

    int fnode;
    cin >> fnode;

    queue<int> q;
    q.push(fnode);

    visited[fnode] = true;
    distance[fnode] = 0;

    while( !q.empty() ){

        int C = q.front(); q.pop();

        for( auto i: edges[C] ){
            if( visited[i] ) continue;
            visited[i] = true;
            q.push(i);
            cout << i << "#";
            distance[i] = distance[C] + 1;
        }
    }

    cout << '\n';
    cout << "Distances: \n";

    for(int i = 0; i < n; ++i){

        cout << i << "->" << distance[i] << '\n';
        
    }

    return 0;

}

