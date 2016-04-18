#include<iostream>
using namespace std;
main()
{
        double x,m,j;
	cin>>m;
	for(j=1;j<=m;j++)
	{
		int n=0,r,d;
        	cin>>x;
		d=r=1;
		while(r>0)
		{
			d*=5;
			r=(x/d);
		 	 n+=r;

		}
        	cout<<n<<endl;
	}
}
