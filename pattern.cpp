#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    
    int space, star;
    int j;
    int res;
    int temp;
   
    for(int i=0; i<n; i++){
        space=n -(i+1);
        for(int s=0;s<space;s++){
            cout<<"\t";
        }
        if(i==0){
            res=1;
            cout<<res;
            goto loop_start;
        }
        res=res+(n-i+1);
        cout<<res<<"\t";
        temp=res;
        for(j=i; j>0; j--){
            temp=temp-(n-j);
            cout<<temp<<"\t";
        }
        loop_start:
        cout<<"\n";
    }
}
