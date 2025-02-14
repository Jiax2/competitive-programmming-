#include<bits/stdc++.h>
using namespace std;
int main() {
    int hh, mm;
    char c;
    cin>>hh>>c>>mm;
    int h = hh + (mm+30)/60;
    string m;
    if(mm>=30) {
        if((mm+30)%60<10) {
            m = "0" +  to_string((mm+30)%60);
        } else {
            m = to_string((mm+30)%60);
        }
    }
    else {
        m = to_string(mm+30);
    }
    cout<<"PELIGRO DE INUNDACION: Evita entrar a sotanos y bajos, evita desplazamientos y busca un lugar alto. La inundacion llegara a las "<<h<<":"<<m<<endl;
    return 0;
}