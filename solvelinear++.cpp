#include <bits/stdc++.h>
using namespace std;
float x,y;
bool solve(float a, float b, float c, float p, float q, float r){
	if(p*b == a*q){
		if(a*r == p*c)cout<<"Infinite Solutions";
		else cout<<"No Solution";
		return false;
	}
	else{
		y = (p * c - a * r)/(p * b - a * q);
		x = (b * r - q * c)/(p * b - a * q);
		return true;
	}
}
int main(){

	float a,b,p,q,c,r;
	cout<<"ax + by = c \npx + qy = r \n";
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	cout<<"p = ";
	cin>>p;
	cout<<"q = ";
	cin>>q;
	cout<<"r = ";
	cin>>r;
	if(solve(a,b,c,p,q,r)){
		cout<<"x is "<<x<<endl<<"y is "<<y;
	}
}
