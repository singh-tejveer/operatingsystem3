#include<stdio.h>

int main()
{
	int i,st,j,len,c,k;
	int f[100];
	for(i=0;i<100;i++)
	{
		f[i]=0;
	}
	loop:	
	printf("Enter the starting block & length of file :- ");
	scanf("%d%d",&st,&len);
	
	for(j=st;j<(st+len);j++)
	{
		if(f[j]==0)
		{
			f[j]=1;
			printf("\n%d->%d",j,f[j]);
		}
		else
		{
			printf("Block already allocated");
			break;
		}
    }
	if(j==(st+len))
		printf("\nThe file is allocated to disk");
		
	printf("\nTo enter more files?(y-1/n-0)");
	scanf("%d",&c);
	
	if(c==1)
		goto loop;
	else
		return(0);
}
