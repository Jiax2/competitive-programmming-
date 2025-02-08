#include <iostream>

using namespace std;

int main(){
    int i; 
    int count; 
    cin >> i; 
    for(int j = 0; j< i; j++){
        int petya, vasya, tonya; 
        cin >> petya >> vasya >> tonya; 
        if(petya+vasya+tonya >= 2){
            count = count +1; 
        }
    }
    cout << count; 
}