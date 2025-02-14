#include<bits/stdc++.h>
using namespace std; 
long long recSum(long long num, long long sum){
    if(num<10){ return sum+num; }
    else{
        sum += num%10; 
        return recSum(num/10, sum); 
    }
}

int main(){
    long long n; 
    cin>>n; 
    cout << recSum(n, 0); 
}

