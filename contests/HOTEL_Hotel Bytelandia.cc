#include<iostream>
using namespace std;
int main()
{
	int t,m[1100];
	cin>>t;
	while(t--) {
		for(int i=0;i<1001;i++)
			m[i]=0;
		int n;
		cin>>n;
		int a[n],b[n];
		for(int x=1;x<=n;x++)
			cin>>a[x];
		for(int y=1;y<=n;y++)
			cin>>b[y];
		for(int z=1;z<=n;z++)
			for(int i=a[z];i<b[z];i++)
				m[i]++;
	int max=0;
	for(int j=0;j<=1000;j++)
		if(max<m[j])
			max=m[j];
	cout<<max<<endl;
	}
	return 0;
}
