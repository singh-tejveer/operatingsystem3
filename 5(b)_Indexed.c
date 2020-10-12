#include<stdio.h>
int main()
{
    int i,k,j,in[50],n,c,count=0,p,f[100];
	for(i=0;i<100;i++){
		f[i]=0;}
	loop:
	printf("Enter index block: ");
	scanf("%d",&p);
	if(f[p]==0)
	{
		f[p]=1;
		printf("Enter no of files on  index %d\t:",p);
		scanf("%d",&n);
	}
	else
	{
		printf("Block already allocated\n");
		goto loop;
	}
	printf("\nEnter files for  index %d\t:",p);
	for(i=0;i<n;i++){
		scanf("%d",&in[i]);
}
	for(i=0;i<n;i++)
		if(f[in[i]]==1)
		{
			printf("Block already allocated\n");
			goto loop;
		}
	
	for(j=0;j<n;j++){
		f[in[j]]=1;
       }
	printf("\n Allocated Successfully");
	for(k=0;k<n;k++){
		printf("\n %d->%d:%d",p,in[k],f[in[k]]);
         }
	printf("\nTo enter more files?(y-1/n-0)");
	scanf("%d",&c);
	
	if(c==1){
		goto loop;
	}
	else
		return(0);
}
