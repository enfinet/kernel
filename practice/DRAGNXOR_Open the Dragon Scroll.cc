#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,a,b,az=0,bz=0,a1=0,b1=0;
		cin>>n>>a>>b;
		int arr[n];
		while(a!=0) {
			if(a%2==0)
				az++;
			else a1++;
			a/=2;
		}
		while(b!=0) {
			if(b%2==0)
				bz++;
			else b1++;
			b/=2;
		}
		az+=(n-(az+a1));
		bz+=(n-(bz+b1));
		if(a1>=b1) {
			int i,j;
			if(bz<=a1)
			for(i=0;i<bz;i++)
				arr[i]=1;
			else
				for(i=0;i<a1;i++)
					arr[i]=1;
			j=i;
			if(b1>=az)
				while(az--)
					arr[j++]=1;
			else
				while(b1--)
					arr[j++]=1;
			if(j<n)
				while(j<=n)
					arr[j++]=0;
		}else{
			int i,j;
			if(az<=b1)
				for(i=0;i<az;i++)
					arr[i]=1;
			else
				for(i=0;i<b1;i++)
					arr[i]=1;
			j=i;
			if(bz<=a1)
				while(bz--)
					arr[j++]=1;
			else
				while(a1--)
					arr[j++]=1;
			if(j<n)
				while(j<=n)
					arr[j++]=0;
		}
/*		int y=0;
		while(y<n)
			cout<<arr[y++];
		cout<<endl;*/
		long num=0;
		int y=0;
		while(n--)
			num+=arr[n]*pow(2,y++);
		cout<<num<<endl;
	}
	return 0;
}
