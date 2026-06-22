#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    float temp;
    int choice;
    map<string, float> mpp;
    while(true){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the temperature: ";
        cin >>temp;
        mpp[name]=temp;
        cout<<"Enter 1 to continue and 0 to exit: ";
        cin>>choice;
        if(choice==1){
            continue;
        }
        else{
            break;
        }
    }
    float max=0;
    for(auto it: mpp){
        if(it.second>max){
            max=it.second;
        }
        
    }
    cout<<"Max: "<<max;
    return 0;

}
