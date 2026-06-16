#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> input_intervals;
    vector<pair<int,int>> final_intervals;
    int n;
    
    cout << "Enter number of intervals: ";
    cin >> n;
    
    if (n <= 0) return 0; // Guard against empty inputs
    
    for(int i = 0; i < n; i++){
        int val1, val2;
        chance: 
        cout << "Enter beginning: ";
        cin >> val1;
        cout << "Enter end: ";
        cin >> val2;
        
        if(val1 > val2){
            cout << "1st value should be lesser than second value!\n";
            goto chance;
        }
        input_intervals.push_back({val1, val2});
    }
    
    // FIX 1: Sort ONCE outside the input loop to make it efficient
    sort(input_intervals.begin(), input_intervals.end());
    
    cout << "\nSorted Inputs:\n";
    for(auto it: input_intervals){
        cout << it.first << "--->" << it.second << "\n";
    }
    
    // FIX 2: Initialize 'final_intervals' with the first sorted interval
    final_intervals.push_back(input_intervals[0]);
    
    int i = 1; // Start checking from the second element (index 1)
    while(i < input_intervals.size()){
        // Compare current interval with the LAST element added to 'final_intervals'
        if(input_intervals[i].first <= final_intervals.back().second){
            // There is an overlap, update the end value to the maximum possible
            final_intervals.back().second = max(final_intervals.back().second, input_intervals[i].second);
        }
        else{
            // No overlap, safely push the new standalone interval
            final_intervals.push_back(input_intervals[i]);
        }
        i++; // Safely advance one index at a time
    }
    
    cout << "\nMerged Output:\n";
    for(auto it: final_intervals){
        cout << it.first << "-->" << it.second << "\n";
    }
    
    return 0;
}
