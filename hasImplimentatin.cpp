#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
class hashing{
    public :
         vector<list<int>> hashtable;
         int buckets ;
         hashing (int size){
            buckets= size;
            hashtable.resize(size);
         }
         int hashvalue (int key){
            return key%buckets;// divition method 
         }
         void add (int key){
            int idx = hashvalue(key);
            hashtable[idx].push_back(key);
         }
         list<int> :: iterator search (int key){
            int idx = hashvalue (key);
            find (hashtable[idx].begin(),hashtable[idx].end(),key);
         }
         void deletekey (int key){
            int idx = hashvalue (key);
            if (search(key)!=hashtable[idx].end()){
                hashtable[idx].erase(search(key));
            }
         }
};
int main (){
    cout<<"enter the number of element : ";
    int n;
    cin>>n;
     hashing h(n);
     cout<<"enter the elements : ";
     for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        h.add(ele);
     }
     cout<<"enter the element you want to search : ";
     int tar;
     cin>>tar;
    if (h.search(tar)!=h.hashtable[h.hashvalue(tar)].end()) cout<<tar<<" is present at the : "<<h.hashvalue(tar)<<endl;
    else cout<<tar<<" is absent\n";
}