#include <iostream>
#include <vector>
#include <algorithm>
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n;

struct node{
	string s;
	int a, b, c;
};

vector<node> v;

int main(){
	fastio();
	cin>>n;
	while(n--){
		node go;
		cin>>go.s>>go.a>>go.b>>go.c;
		v.push_back(go);
	}
	sort(v.begin(), v.end(), [](const node& x, const node& y){
		if(x.a != y.a) return x.a > y.a;
		else{
			if(x.b != y.b)	return x.b<y.b;
			else{
				if(x.c != y.c)	return x.c>y.c;
				else return x.s<y.s;
			}
		}
	});

	for(auto i:v)	cout<<i.s<<'\n';
	//<<" "<<i.a<<" "<<i.b<<" "<<i.c<<'\n';
	
	
}