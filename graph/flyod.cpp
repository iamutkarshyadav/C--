#include<bits/stdc++.h>
using namespace std; 
#define V 4
#define INF 999999
void print(int dist[][V]);
void floyd(int dist[][V]){
    int i, j, k;
    for (int k = 0; k < V; k++){
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                if(dist[i][j] > (dist [i][k] + dist[k][j])
                &&(dist[k][j]  != INF && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    print(dist);
}
void print(int dist[][V]){
    cout << "The following matrix shows the shortest distance \n";
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            if(dist[i][j] == INF)
                cout << "INF"
                     << " ";
                     else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int graph[V][V] = {{0, 5, INF, 10},
                       {INF, 0, 3, INF},
                       {INF, INF, 0, 1},
                       {INF, INF, INF, 0}};
    floyd(graph);
    return 0;
}