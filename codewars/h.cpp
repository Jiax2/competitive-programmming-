#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    while(n--){
        string s; 
        cin>>s; 
        string r =s.substr(1,2); 
        string g = s.substr(3,2); 
        string b = s.substr(5,2); 
        cout<<"rgb("<<stoi(r, 0, 16)<<","<<stoi(g,0,16)<<","<<stoi(b,0,16)<<")"<<endl;     
    }
}

