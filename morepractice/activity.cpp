#include<bits/stdc++.h>
using namespace std; 
class Activity{
    public:
        int start, finish;
};
bool compare(Activity s1, Activity s2){
        return (s1.finish < s2.finish);
}
 void print(Activity arr[], int n){
        sort(arr, arr + n, compare);
        int i = 0;
        cout << "The maximum number of the activities \n";
        cout << "{" << arr[i].start << "," << arr[i].finish << "}";
        for (int j = 0; j < n; j++){
            if(arr[j].start >= arr[i].finish){
                cout << "{" << arr[j].start << "," << arr[j].finish << "}";
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