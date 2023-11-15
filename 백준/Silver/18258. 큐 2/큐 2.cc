#include <iostream>
#include <algorithm>
#include <queue>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int n, k;
string s;
queue <int> q;

int main()
{
    fastio();
	cin>>n;
	while(n--)
	{
		cin>>s;
		
		if(s == "push")
		{
			cin>>k;
			q.push(k);
		}
		else if(s == "pop")
		{
			if(q.empty())	cout<<-1<<'\n';
			else
			{
				cout<<q.front()<<'\n';
				q.pop();
			}
		}
		else if(s == "size")	cout<<q.size()<<'\n';
		else if(s == "empty")
		{
			if(q.empty())	cout<<1<<'\n';
			else	cout<<0<<'\n';
		}
		else if(s == "front")
		{
			if(q.empty())	cout<<-1<<'\n';
			else	cout<<q.front()<<'\n';
		}
		else if(s == "back")
		{
			if(q.empty())	cout<<-1<<'\n';
			else	cout<<q.back()<<'\n';
		}
	}
	
}