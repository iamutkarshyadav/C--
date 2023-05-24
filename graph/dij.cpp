#include<iostream>
using namespace std; 
#include<limits.h>
#define V 9
int mindistace(int dist[], bool sptset[]){
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
    if(sptset[v] == false && dist[v] <= min)
        min = dist[v], min_index = v;
    return min_index;
}
void print(int dist[]){
    cout << "Vertex \t  Distance from the source is " << endl;
    for (int i = 0; i < V; i++)
    cout << i << "\t\t\t\t" << dist[i] << endl;
} 
void dijkstra(int graph[V][V], int src){
    int dist[V];
    bool sptset[V];
    for (int i = 0; i < V; i ++)
    dist[i] = INT_MAX, sptset[i] = false;
    dist[src] = 0;
    for (int count = 0; count < V; count++){
    int u = mindistace(dist, sptset);
    sptset[u] = true; 
    }
}