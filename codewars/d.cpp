#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i = 1; i<= t; i++) {
		int n;
		cin>>n; 
		long long totciud = 0, totpolit = 0, tot = 0;
		for(int j = 0; j<n; j++) {
			char c;
			cin>>c;
			long long aux;
			if(c == 'C') {
				cin>>aux;
				totciud += aux; 
			} else if(c == 'P') {
				cin>>aux;
				totpolit += aux; 
			}
			tot+=aux;
		}
		cout<<"Case "<<i<<":"<<endl; 
		double richer = 0, poorer = 0; 
		if(totciud == 0 || totpolit == 0){
		    cout<<"Politicians are "<<"0"<<"% richer"<<endl; 
	        cout<<"Citizens are "<<"0"<<"% poorer"<<endl; 
		}else{
		   double robo= totciud*0.6;  
		   richer= (robo/totpolit)*100;
		   poorer = (robo/totciud)*100;
		   cout<<"Politicians are "<<fixed<<setprecision(6)<<richer<<"% richer"<<endl; 
	       cout<<"Citizens are "<<fixed<<setprecision(6)<<poorer<<"% poorer"<<endl;
		} 
	}
	return 0;
}