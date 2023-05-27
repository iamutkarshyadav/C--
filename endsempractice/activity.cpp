#include<bits/stdc++.h>
using namespace std; 
class Activity{
    public:
        int start, finish;
};
bool compare(Activity a, Activity b){
        return (a.finish < b.finish);
}
void print(Activity arr[], int n){
        sort(arr, arr + n, compare);
        int i = 0;
        cout << "The maximum number of Activities are : \n";
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
        Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
        int n = sizeof(arr) / sizeof(arr[0]);
        print(arr, n);
        return 0;
}