#include<bits/stdc++.h>
using namespace std; 
void solution(){
   int hh,mm; 
   char c; 
   cin >> hh>>c >> mm; 
   string am = (hh<12? " AM": " PM"); 
   hh = (hh%12 ? hh%12 : 12); 
   cout << (hh<10? "0" : "")<< hh << c << (mm < 10? "0" : "") << mm << am << endl; 
}
int main(){
    int t; 
    cin >> t; 
    while(t--){
        solution(); 
    }
}
