#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; 
    getline(cin, s); 
    stringstream ss(s); 
    string word; 
    while(ss>>word){
        for(int i= word.size(); i>= 0; i--){
            cout<<word[i]; 
        }
        cout<<" "; 
    }
    return 0; 
}