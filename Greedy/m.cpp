#include<bits/stdc++.h>
using namespace std; 
int matrix(int p[], int i, int j){
    if( i == j)
        return 0;
    int k;
    int mini = INT_MAX;
    int count;
    for (k = i; k < j; k ++){
        count = matrix(p, i, k) + matrix(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        mini = min(count, mini);
    }
    return mini;
}
 int main(){
    int arr[] = {1, 2, 3, 4, 3};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << matrix(arr, 1, N - 1);
    return 0;
 }