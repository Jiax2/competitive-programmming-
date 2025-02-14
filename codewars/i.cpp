#include <bits/stdc++.h>
using namespace std; 
int main(){
    //desincronizar 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin>>t; 
    while(t--){
        int n; 
        cin>>n; 
        long long sum = 0; 
        for(int i= 0; i< n; i++){
            long long a, b;
            char c; 
            cin>>a>>c>>b;
            if(c == '+'){
                sum += max(a+b, 1LL); 
            }else if(c == '-'){
                sum += max(a-b, 1LL); 
            }else if(c == '*'){
                sum += max(a*b, 1LL); 
            }
        }
        cout<<sum<<endl; 
    }
}