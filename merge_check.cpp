#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <pair<int,int>> interval;
    vector <pair<int,int>> fin_int;
    set <int> interval_elements;
    int n;
    cout<<"Enter the number of intervals: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int v1,v2;
        chance:
        cout<<"Enter beginning: ";
        cin>>v1;
        cout<<"Enter ending: ";
        cin>>v2;
        if (v1 < v2){
            
            interval.push_back({v1,v2});
        }
        else{
            cout<<"First value should be less than second value";
            goto chance;
        }
        
    }
    int i=0;
    while(i<interval.size()){
        // cout<<it.first <<"-->"<<it.second<<"\n";
        
        // cout<<"Index wise" <<interval[2].first<< "-->" << interval[2].second<<"\n";
        
        if (interval[i].second > interval[i+1].first){
            fin_int.push_back({interval[i].first, interval[i+1].second});
            i+=2;
        }
        else{
            if(interval[i].second < interval[i+1].first){
                fin_int.push_back({interval[i].first, interval[i].second});
                i+=2;
            }
        }
        
    }
    
    for(auto it: interval){
        for(int i=it.first; i<=it.second; i++){
            interval_elements.insert(i);  // all the elements that are inside the intervals 
        }
    }
    
    vector <int> sorted_interval_given;
    for(auto it: interval){
        sorted_interval_given.push_back(it.first);
        sorted_interval_given.push_back(it.second);
    }
    
    set <int> sorted_interval(sorted_interval_given.begin(), sorted_interval_given.end());
    
    int size=sorted_interval.size();
    int arr[size];  // all the mentioned values as intervals
    copy(sorted_interval.begin(), sorted_interval.end(), arr);
    for(int i=0;i<size; i++){
        cout<<arr[i]<<"\t";
    }
    
    int elt_size=interval_elements.size();
    int arr_elt[elt_size];
    copy(interval_elements.begin(), interval_elements.end(), arr_elt);
    cout<<"All the elements--\n";
    for(int i=0;i<elt_size; i++){
        cout<<arr_elt[i]<<"\t";
    }
    int j=0;
    int first_val, second_val;
    i=0;
    
    cout<<"Final result";
    while(i<fin_int.size()){
        cout<<fin_int[i].first<<"-->"<<fin_int[i].second<<"\n";
        i++;
    }
   
    
    
}
