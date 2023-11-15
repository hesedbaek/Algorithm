#include <iostream>
using namespace std;

int main()
{
   string n;
   int num, buy, max =0;
    //배열 크기가 하나 부족합니다. int arr[10]={0}; 으로 변경하셔야 될 것 같습니다.
   int arr[9]={0}; // 0 ~ 8번까지 존재
   cin>>n;
   
   for(char c:n)
   {
      num = c-'0';
      if(num == 9)
         arr[6]++;
      else
         arr[num]++;
   }
/*
    for(int i = 0; i <= 9; i++) cout << arr[i] << ' ';
    cout << '\n';
*/
   if(arr[6]%2 != 0)
      arr[6] = arr[6]/2 +1;
   else
      arr[6] /= 2;  //-> arr[] = arr[] / 2
	    //arr[6] = arr[6] / arr[6] / 2인데
        //arr[6]이 0이면(6이나 9가 입력이 안된다면) 어떻게 될까요???
        //0으로 나누는 결과가 나오지 않을까요??
   
   for(int i=0; i<9; i++)
   {
      if(arr[i] > max)
         max = arr[i];   
   }
   cout<<max;
   
}