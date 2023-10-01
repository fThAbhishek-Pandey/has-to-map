#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
bool isEqualString (vector<string> vec){
    unordered_map<char,int> m;
    for(int i=0;i<vec.size();i++){
    for(auto ele: vec[i]){
        m[ele]++;
    }
    }
    for (auto ele: m){
        if (ele.second%vec.size()!=0) return false; 
    }
    return true;
}
int main(){
    cout<<"enter the number of  word : ";
    int n;
    cin>>n;
    vector<string> vec(n);
    cout<<"enter the words\n";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    if (isEqualString(vec)) cout<<"Alright \n";
    else cout<<"try angain \n";
  return 0;    
}