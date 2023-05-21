#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ex
{
	int n;
	char s[10];
};
int main()
	{
	struct ex p[100];
	int N,i,c=0,h=0,k=0,j=0,b[100],min=0,min1=0,t=0,ans=0;
	char a[10],tb[10];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		{
		  scanf("%d",&p[i].n);
		  if(p[i].n!=-1)
		  	{
		  	scanf("%s",&p[j].s);
		  	j++;
			  }
		  	else
		  	j++;
	}
	for(i=0;i<N;i++)
		{
		if(p[i].n==-1)
			{
			min1=p[i-1].n;
			for(i=i-1;i>=0;i--)
				{
			if(p[i].n!=-1)
				{
				b[h]=p[i].n;
				h++;
				t=h;
				}
				if(p[i].n<min1)
				strcpy(tb,p[i].s);
			}
			for(h=h-1;h>=0;h--)
				{
			a[k]=b[h];
			k++;
			}
			min=a[0];
			for(k=0;k<t;k++)
				{
				if(min>a[k])
					{
				min=a[k];
				ans=k;
				}
			}
		}
			printf("%d %s",ans,tb);
                          printf(“\n”);
			h=0;
			k=0;
	}	
	return 0;
}
