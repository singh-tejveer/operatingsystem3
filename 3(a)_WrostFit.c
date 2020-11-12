#include<stdio.h>
#include<conio.h>
int main()
{
int n,f,i,j,x,y;

printf("\tWrost Fit)\n");

printf("Enter the number of blocks:");
scanf("%d",&n);
int a[n+1],c[n+1],frag[n+1];
for(i=1;i<=n;i++)
{
printf("Enter the size of the %dth Block:-",i);
scanf("%d",&a[i]);
c[i]=0;
}

printf("Enter the number of files:");
scanf("%d",&f);
int b[f+1],d[f+1];

for(i=1;i<=f;i++)
{
printf("Enter the size of the %dth file :-",i);
scanf("%d",&b[i]);
d[i]=0;
}


int t;

for(i=1;i<=f;i++)
{ x=0;
 for(j=1;j<=n;j++)
 {
if(c[j]==0)
 {

if(a[j]>=b[i])
 {
 t=a[j]-b[i];
 if(x<=t)
 {
 frag[j]=t;
  x=t;
  y=j;
}
 }
 }
 }
 d[i]=y;
 c[y]=1; 
 y=0;
}
printf("\nFile Size Block_no  Block_size Fragement");
for(i=1;i<=f;i++)
{
if(d[i]==0)
{
	printf("\n%d\t%d\t NOT ALLOCATED",i,b[i]);
}
else{

printf("\n%d\t%d\t%d\t%d\t%d",i,b[i],d[i],a[d[i]],frag[d[i]]);
}}}
