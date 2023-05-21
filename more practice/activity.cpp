#include<bits/stdc++.h>
using namespace std; 
class Activity{
public:
    int start, finish;
};
 bool compare(Activity s1,  Activity s2){
    return (s1.finish < s2.finish);
 }
  void print(Activity arr[], int n){
    sort(arr, arr + n, compare);
    int i = 0;
    cout << "The maximum number of the activites that can be slected are : \n";
    cout << "(" << arr[i].start << "," << arr[i].finish << ")";
    for (int j = 0; j < n; j ++){
        if(arr[j].start >= arr[i].finish){
            cout << "(" << arr[j].start << "," << arr[j].finish << ")";
      }
    }
  }
  int main()
  {
    Activity arr[] = {{1, 3}, {2, 5}, {3, 4}, {4, 7}, {5, 10}, {6, 9}, {7, 11}, {8, 13}, {9, 12}, {12, 14}};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    return 0;
  }