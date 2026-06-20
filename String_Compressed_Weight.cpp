#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cout<<"Enter the string: ";
    cin>>input;
    int i=0;
    int sum=0;
    while (i<input.size()){
        int j=i;
        int cnt=1;
        while(j<input.size() and input[i]==input[j]){
            sum=sum+cnt*(input[i]-'a' + 1);
            cout<<"Intermediate result: "<<(input[i]-'a'+1)<<"\n";
            cnt++;
            j++;
        }
        i=j;
    }
    cout<<"The total sum is: "<<sum;
    cout<<"\n";
    return 0;
}
