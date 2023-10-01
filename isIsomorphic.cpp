#include<iostream>
#include<unordered_map>
using namespace std;
bool is121mapping (string s1,string s2){
        unordered_map<char,char> m;
        for (int i=0;i<s1.size ();i++){
            if (m.find(s1[i])!=m.end()){
                if (m[s1[i]]!=s2[i]) return false;
            }
            else m[s1[i]]= s2[i];
        }
        return true;

}
bool isIsomorphic (string s1,string s2){
    if (s1.length()!=s2.length()) return false;
    // for checking s1 to s2 one to one mapping 
    bool s1s2 = is121mapping (s1,s2);
    //for checking s1 to s2 one to one mapping
    bool s2s1 = is121mapping(s2,s1);
    return s2s1&&s1s2;
}
int main (){
    cout<<"enter first string : ";
    string s1;
    cin>>s1;
    cout<<"enter second string : ";
    string s2;
    cin>>s2;
    if (isIsomorphic (s1,s2)) cout<<"both is isomophic\n";
    else cout<<"try again\n";
}