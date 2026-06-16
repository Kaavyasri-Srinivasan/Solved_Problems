#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int choice=1;
    while (choice ==1){
        int val;
        cout<<"Enter the value: ";
        cin>>val;
        v.push_back(val);
        cout<<"Enter choice: (to continue enter 1 and 0 to stop): ";
        cin>>choice;
    }
    
    
    sort(v.begin(), v.end());
    for(auto it: v){
        cout<< (it) << " ";
    }
    
    int new_elt;
    cout<< "Enter element to insert: ";
    cin>>new_elt;
    int count=0;
    int left, right;
    
    
    for(int i=0; i<v.size(); i++){
        if (v[i] == new_elt){
            cout<<"This value already exist"<< "\n";
            return 0; 
        }
        else{
            continue;
        }
    }
    
    for(int i=0; i<v.size(); i++){
        
        if(v[i]<new_elt and i==v.size()-1){
            left=v[i];
            right=0;
            v.insert(v.begin()+i, new_elt);
            break;
        }
        if (v[i]>new_elt){
            left=v[i-1];
            right=v[i];
            v.insert(v.begin()+i, new_elt);
            break;
        }
        else{
            continue;
        }
    }
    if (left==0){
        string left="NULL";
        cout<<left<<"-->"<<right;
    }
    else if (right==0){
        string right="NULL";
        cout<<left<<"-->"<<right;
    }
    else{
        cout<<left<<"-->"<<right;
    }
    
    return 0;
}
