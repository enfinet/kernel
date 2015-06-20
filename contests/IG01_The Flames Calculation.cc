#include<iostream>
#include<cstring>
#include<cstdio>
#include<map>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--) {
	int m[150],n[150];
	for(int i=50;i<140;i++)
		m[i]=0;
	for(int i=50;i<140;i++)
		n[i]=0;
		char ch;
		string x,y;
		cin>>x>>y;
		int count=0,p=0;
		while (x[p]!='\0') {
			m[x[p]]++;
			count++;
			p++;
		}
		p=0;
//		cout<<count<<endl;
		while ((y[p])!='\0') {
//			cout<<m[y[p]]<<" ";
			if (m[y[p]]>0){count--;m[y[p]]--;}
			else count++;
			p++;
		}
		string a="FLAMES",b;
		if(count==0) {printf("SISTER\n");}
		else {
		    while(a.size()!=1) {
		        int l=count%(a.size());
		        if(l!=0)
                    a.erase(a.begin()+l-1);
                else
                    a.erase(a.begin()+a.size()-1);
                b=a.substr(0,l-1);
                a.erase(0,l-1);
                a+=b;
		    }
		if(a=="F")cout<<"FRIENDS"<<endl;
		else if(a=="L")cout<<"LOVE"<<endl;
		else if(a=="A")cout<<"ADORE"<<endl;
		else if(a=="M")cout<<"MARRIAGE"<<endl;
		else if(a=="E")cout<<"ENEMIES"<<endl;
		else if(a=="S")cout<<"SISTER"<<endl;
		}
	}
	return 0;
}
