#include<bits/stdc++.h>
using namespace std; 
class Activity{
    public:
        int start, final;
};
 bool compare(Activity s1, Activity s2){
        return (s1.final < s2.final);
 }
 void print(Activity arr[], int n){
        sort(arr, arr + n, compare);
        int i = 0;
        cout << "Maximum number of activites are : \n";
        cout << "(" << arr[i].start << "," << arr[i].final << ")";
        for (int j = 0; j < n; j++){
            if (arr[j].start >= arr[i].final){
                cout << "(" << arr[j].start << "," << arr[j].start << ")";
                i = j;
            }
        }
 }
  

int main()
{
    Activity arr[] = {{3, 4}, {5, 7}, {8, 9}, {5, 9}, {1, 2}, {0, 2}};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    return 0;
 }