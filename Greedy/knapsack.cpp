#include<bits/stdc++.h>
using namespace std; 
class Item{
    public:
    int profit, weight; 
    Item(int profit, int weight){
        this->profit = profit;
        this->weight = weight;
    }
};
static bool compare(class Item a, class Item b){
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2; 
}
 double knapsack(int W, class Item arr[], int N){
    sort(arr, arr + N, compare);
    double finalvalue = 0.0;
    for (int i = 0; i < N; i++){
        
    }
 }
