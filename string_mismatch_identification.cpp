#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <char>new_elt1;
    vector <char>new_elt2;
    vector <pair<string, string>> v;
    string s1,s2;
    cout<<"Enter string:";
    cin>>s1;
    cin>>s2;
    int len1=s1.length();
    int len2=s2.length();
    int j;
    if(len1!=len2){
        cout<<"Length should be equal";
        return 0;
    }
    for(int i=0;i<len1; i++){
        j=i;
        
        if(s1[i] != s2[i]){
            while(j<len1 && s1[j] != s2[j]){
                new_elt1.push_back(s1[j]);
                new_elt2.push_back(s2[j]);
                j++;
                
            }
            string res1(new_elt1.begin(), new_elt1.end());
            string res2(new_elt2.begin(), new_elt2.end());
            v.push_back({res1, res2});
            new_elt1.clear();
            new_elt2.clear();
            
            i=j-1;
        }
     
        else{
            continue;
        }
    }
    for(auto it: v){
        cout<<it.first<<"-->"<<it.second<<"\n";
    }
}
