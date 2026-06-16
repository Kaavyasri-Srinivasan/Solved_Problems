#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int ans;
    int iter;
    int l;
    int space, star;
    int j;
    for(int i=0; i<n; i++){
        space=n -(i+1);
        for(int s=0;s<space;s++){
            cout<<" ";
        }
        star=n-space;
        for(int st=0; st<star;st++){
            iter=st+1;
            ans=iter;
            j=st;
            
            while (j>0){
                // cout<<"Inside while loop of "<< st << "\n";
                ans=iter;
                
                for(int val=st; val >0; val--){
                    l=j;
                    ans=ans+(n-l); 
                    l--;
                }
                cout<<ans;
                j--;
            }
            cout<<iter;
        }
        cout<<"\n";
    }
}
