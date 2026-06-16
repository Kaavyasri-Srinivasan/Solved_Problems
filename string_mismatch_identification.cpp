#include <bits/stdc++.h>
using namespace std;
int main(){
    string st1;
    string st2;
    cout<<"Enter string 1: ";
    cin>>st1;
    cout<<"Enter string 2: ";
    cin>>st2;
    int len1=st1.length();
    int len2=st2.length();
    vector <char> new_elt;
    vector <char> new_elt2;
    map <string,string> mpp;
    set <string>res;
    
    int count=0;
    if (len1!=len2){
        cout<<"String size should be same:";
        return 0;
    }
    
    else{
        for(int i=0;i<len1; i++){
            if(st1[i]!=st2[i]){
                new_elt.push_back(st1[i]);
                new_elt2.push_back(st2[i]);
                
            }
            if(st1[i]==st2[i]){
                string result(new_elt.begin(), new_elt.end());
                string result2(new_elt2.begin(), new_elt2.end());
                res.insert(result);
                res.insert(result2);
                cout<<result<<" ";
                cout<<result2<<" ";
                    cout<<"\n";
                mpp[result]=result2;
                result.clear();
                result2.clear();
                
            }
            
        }
        
        
    }
    string result(new_elt.begin(), new_elt.end());
    string result2(new_elt2.begin(), new_elt2.end());
    res.insert(result);
    res.insert(result2);
    cout<<result<<" ";
    cout<<result2<<" ";
    cout<<"\n";
    mpp[result]=result2;
    result.clear();
    result2.clear();
    for(auto it : res){
        cout<<it<< " ";
    }
    cout<<"MAP \n";
    for(auto it: mpp){
        cout<< it.first<< "-->"<<it.second<<"\n";
    }
}
