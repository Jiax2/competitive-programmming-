#include<bits/stdc++.h>
using namespace std; 

void solution(){
    int n; 
    cin>>n; 
    for(int i=0; i<n; i++){
        int a,b,c; 
        cin>> a>>b>>c; 
        if(a<b&&b<c&&a<c){
            cout<< "STAIR"<<"\n"; 
        }
        else if(a<b&&b>c){
            cout<<"PEAK"<<"\n"; 
        }
        else{
            cout<<"NONE"<<"\n"; 
        }
    }
}

int main(){
    solution(); 
}
