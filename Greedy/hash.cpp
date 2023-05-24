#include<iostream>
#include<list>
using namespace std; 
 class hash{
     list<int> *tabl;
     int ht_size; 
     int get_hash(int key){
         return key % ht_size;
     }
     public: 
     hash(int n){
        ht_size = n;
        tabl = new list<int>[ht_size];
     }
     void insert(int key){
        tabl[get_hash(key)].push_back(key);
     }
     
 };