#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[1001];
	ifstream in("C:\\xyeta\\text.txt");
	for(int i=0;i<=1000;i++)
					a[i]=0;
	int x,c;
	int max=0;
	while(!in.eof())
			{
				in>>x;
				a[x]++;
			}
	a[x]--;
	for(int i=0;i<=1000;i++)
			{
				if(a[i]>max)
						{
							max=a[i];	
							c=i;
						}					
			}
	cout<<c;
}
