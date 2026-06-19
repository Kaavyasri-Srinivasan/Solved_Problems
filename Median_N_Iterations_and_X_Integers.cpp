#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array;
    int n;
    // cout<<"Enter numeber of iterations: ";
    // cin>>n;
    int val;
    int choice, idx;
    int iter;
    int mid;
    start:
    do{
        input_start:
        cout<<"Enter the element: ";
        cin>>val;
        array.push_back(val);
        cout<<"To enter elements in this iteration enter '1':";
        cin>>choice;
        if (choice==1){
            goto input_start;
        }
        sort(array.begin(), array.end());
        int len=array.size();
        if(len%2!=0){
            idx=len/2;
            idx=idx;
            cout<<"Median is: "<<array[idx];
        }
        else{
            idx=len/2;
            float mid=(array[idx]+array[idx-1])/2;
            cout<<"Median is: "<<mid;
        }
        
        cout<<"\n To continue the iteration, enter 1: ";
        cin>>iter;
        if(iter==1){
            goto start;
        }
        else{
            return 0;
        }
        
    }while(true);
}
