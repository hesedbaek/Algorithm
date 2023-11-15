#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int n, k, s, y, idx, room;
vector<pair<int, int>> v;

int main()
{
	cin>>n>>k;
	int arr[13][2] ={0,};
	
	while(n)
	{
		cin>>s>>y;
		
		if(s == 0)
		{
			idx = y*2-1;
			arr[idx][0]++;
		}
		else
		{
			idx = y*2;
			arr[idx][1]++;
		}
		n--;
	}
	
	for(int i=1; i<13; i++)
	{
		for(int j=0; j<2; j++)
		{
			room += arr[i][j] / k;
			if(arr[i][j] % k > 0)	room++;
		}	
	}
	cout<<room;
}