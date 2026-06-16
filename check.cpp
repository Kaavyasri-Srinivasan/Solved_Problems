#include <bits/stdc++.h>
using namespace std;

int main(){
    string st1;
    string st2;
    cout << "Enter string 1: ";
    cin >> st1;
    cout << "Enter string 2: ";
    cin >> st2;
    
    int len1 = st1.length();
    int len2 = st2.length();
    
    vector<char> new_elt;
    vector<char> new_elt2;
    
    // We use a vector of pairs to preserve the exact order of mismatches
    vector<pair<string, string>> mismatches;
    
    if (len1 != len2){
        cout << "String size should be same:";
        return 0;
    }
    
    for(int i = 0; i < len1; i++){
        if(st1[i] != st2[i]){
            new_elt.push_back(st1[i]);
            new_elt2.push_back(st2[i]);
        }
        else {
            // FIX 2: Only process if we actually collected mismatched characters
            if(!new_elt.empty()) {
                string result(new_elt.begin(), new_elt.end());
                string result2(new_elt2.begin(), new_elt2.end());
                
                mismatches.push_back({result, result2});
                
                // FIX 1: Clear the vectors so the next mismatch starts fresh
                new_elt.clear();
                new_elt2.clear();
            }
        }
    }
    
    // Process the final segment if the strings ended on a mismatch
    if(!new_elt.empty()) {
        string result(new_elt.begin(), new_elt.end());
        string result2(new_elt2.begin(), new_elt2.end());
        mismatches.push_back({result, result2});
    }

    // FIX 3: Print the final output in your exact requested format
    cout << "\noutput:\n";
    for(const auto& p : mismatches){
        cout << p.first << "," << p.second << "\n";
    }
    
    return 0;
}
