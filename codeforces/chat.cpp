#include<iostream>
#include<string>
#include<map>

using namespace std; 

bool repeated(string text){
    map<char,int> count; 
    for(int i=0; i< text.length(); i++){
        count[text[i]]++; 
    }
    if(count.size()%2==0){return true; }
    else{return false; }
}
int main(){
    string text; 
    cin >> text;
    bool sol= repeated(text); 
    if(sol){
        cout<<"CHAT WITH HER!"; 
    }else{
        cout<<"IGNORE HIM!"; 
    }
    return 0; 
}

