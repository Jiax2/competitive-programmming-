#include<iostream>
#include<string>
using namespace std; 

int main(){
    int g; 
    int n; 
    cin>> n;  
    string game;
    cin >> game;  
    for(int i= 0; i<n; i++){
        if(game[i] == 'A'){
            g = g+1; 
        }else{
            if(game[i] == 'D'){
                g = g-1; 
            }
        }
    }
    if(g == 0){
        cout << "Friendship"; 
    }else{
        if(g > 0){
            cout << "Anton"; 
        }else{
            cout <<"Danik"; 
        }
    }
    return 0; 
}