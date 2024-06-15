#include<bits/stdc++.h>
using namespace std; 
/* void sol1(){
    int n; 
        cin>>n; 
        for(int i=0; i<2*n; i++){
            for(int j= 0; j<2*n; j++){
                cout << (i/2 + j/2 & 1? ".": "#"); 
            }
        cout<< endl; 
    }
} */
void sol2(){
    int n; 
    cin>>n; 
    for(int i= 0; i<n; i++){
        string s = ""; 
        for(int j= 0; j<n; j++){
            s+=(i+j)%2==0?"##": ".."; 
        }
        cout<<s<<endl<<s<<endl; 
    }
}
int main(){
    int t; 
    cin >> t;  
    for(int l= 0;l<t; l++){
        sol2(); 
    }
    return 0; 
}
