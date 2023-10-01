#include<iostream>
#include<unordered_map>
using namespace std;
bool isAnagram (string s1,string s2){
    if (s1.length()!=s2.length()) return false;
    unordered_map<char,int> m;
    for (auto ele :s1){
        m[ele]++;
    }
    for (auto ele: s2){
        if (m.find(ele)==m.end()) return false;
        m[ele]--;
    }
    for (auto ele: m){
        if (ele.second!=0) return false;
    }
    return true;
}
int main (){
    cout<<"enter the first sting : ";
    string s1;
    cin>>s1;
    cout<<"enter the second string : ";
    string s2;
    cin>>s2;
    if (isAnagram (s1,s2)) cout<<"Anagram \n";
    else cout<<"try again\n";
}