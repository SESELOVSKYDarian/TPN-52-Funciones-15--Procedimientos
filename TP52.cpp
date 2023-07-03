#include <bits/stdc++.h>
using namespace std;
void MultiplicarPorTabla (int num);
int main ()
{
	int n;
	cin>>n;
	MultiplicarPorTabla(n);
	return 0;
}
void MultiplicarPorTabla (int num)
{
	for (int i=1; i<=10; i++)
	{
		cout<<i<<" x "<<num<<"= "<<i*num<<endl;
	}
}