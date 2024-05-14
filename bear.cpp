#include<iostream>
using namespace std; 

int main(){
    int limak; 
    int bob; 
    cin >> limak >> bob; 
    int count; 
    while(limak <= bob){
        limak = limak * 3; 
        bob = bob * 2; 
        count++; 
    }
    cout << count; 
    return 0; 
}