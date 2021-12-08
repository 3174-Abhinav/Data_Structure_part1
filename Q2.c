#include<stdio.h>
#include<stdlib.h>
 void sort(int a[],int n)
{
 int i,k,j;
 for(i=0;i<n;i++)
{
 k=a[i];
 j=i-1;
while(j>=0 && a[j]>k)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=k;
}
}

void merge(int a[],int b[],int n,int m)
{
int i=0,j=0,k=0;
int t=n+m;
int c[t];
printf("First array is :");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
printf("Second array is :");
for(i=0;i<m;i++)
{
printf("%d ",b[i]);
}
printf("\n");
while(i<n && j<m)
{
 if(a[i]<=b[j])
    c[k++]=a[i++];
 else
    c[k++]=b[j++];
}
while(i<n){
c[k++]=a[i++];
}
while(j<m){
c[k++]=b[j++];
}
printf("Merged array is :");
for(i=0;i<t;i++)
{
printf("%d ",c[i]);
}
}

int main(){
int n,m,i;
printf("Enter the size of First array :");
scanf("%d",&n);
printf("Enter the size of Second array :");
scanf("%d",&m);
int a1[n],a2[m];
printf("Enter the elements of First array :");
for(i=0;i<n;i++){
scanf("%d",&a1[i]);
}
printf("Enter the elements of Second array :");
for(i=0;i<m;i++){
scanf("%d",&a2[i]);
}
sort(a1,n);
sort(a2,m);
merge(a1,a2,n,m);
 return 0;
}
 

