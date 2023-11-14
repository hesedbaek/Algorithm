#include <iostream>
using namespace std;


int main()
{
	string s;
	char answer;
	int arr[26]={0};
	int max =0;
	
	cin>>s;
	
	for(char c:s)
	{
		if(c>='a')
			c-=32;
		
		arr[c-'A']++;		
	}

	for(int i=0; i<26; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			answer = i+'A';
		}
		
		else if(arr[i] == max)
			answer ='?';
	}
	cout<<answer<<endl;

}