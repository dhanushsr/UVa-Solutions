	#include <iostream>
	#include <algorithm>
	#include <string>
	#include <cstdio>
	#include <cstring>
	using namespace std;

	int main()
	{
		int n,p,i,tmp,reqmet=-12,k;
		double curmax=3.402823e+38,cinput;
		char name[80],a[80];
		scanf("%d%d",&n,&p);
		k=0;
		while(n!=0||p!=0)
		{
			reqmet=-12;
			for(i=0;i<n;i++)
			{
				scanf(" %[^\n]s",a);
			}
			for(i=0;i<p;i++)
			{
				scanf(" %[^\n]s",a);	
				scanf("%lf%d",&cinput,&tmp);
				if(tmp>reqmet)
				{
					reqmet=tmp;
					strcpy(name,a);
					curmax=cinput;
				}
				else if(tmp==reqmet)
				{
					if(cinput<curmax)
					{
						reqmet=tmp;
						strcpy(name,a);
						curmax=cinput;
					}
				}
				for(int j=0;j<tmp;j++)
				{
					scanf(" %[^\n]s",a);
				}
			}
			k++;
			cout<<"RFP #"<<k<<endl<<name<<endl;
			scanf("%d%d",&n,&p);
			if(n!=0&&p!=0)
				cout<<endl;	
		}
	}