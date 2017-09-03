#include<stdio.h>
void main()
{
int a[i],t,i,j;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
if(a[i]>a[j])
{
  t=a[i];
  a[i]=a[j];
  a[j]=t;
printf("%d",a[2]);
}
}}
}
