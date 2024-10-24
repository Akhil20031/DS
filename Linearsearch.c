#include<stdio.h>
int main()
{
int a[50],n,i,k,tf=0;
printf("Enter a limit for Array: ");
scanf("%d",&n);
printf("\nEnter Array Elements : \n");
for(i=0;i<n;i++)
{
printf("Enter Elements a[%d]: ",i);
scanf("%d",&a[i]);
}
printf("\n Enter a value to search: ");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("\n Elements %d Found at position a[%d]\n",k,i);
tf=1;
}
if(tf==0) 
printf("\n Item not found in array. \n");
}
return 0;
}
