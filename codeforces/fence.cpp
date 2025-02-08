#include<iostream>
using namespace std; 
int main(){
    int friends; 
    int height; 
    int count; 
    cin>> friends >> height; 

    for(int i= 0; i<friends; i++){
        int person; 
        cin >> person; 
        if(person > height){
            count = count +2; 
        }else{
            count = count +1; 
        }
    }
    cout << count; 
    return 0; 
}
