#include<stdio.h>
int main()
{
int a[100],i,beg,end,mid,n,search,c=0;
printf("how many elements=\n");
scanf("%d",&n);
printf("enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be search:");
scanf("%d",&search);
mid=0;
beg=0;
end=n-1;
while(end>=beg)

{
mid=((beg+end)/2);
if(a[mid]==search)
{
for(i=0;i<n ;i++)
{
if(a[i]==a[mid])
{
printf("%d the element found is position :%d\n",search,i+1);
}
c++;

}
break;
}
else if(search>a[mid])
{
beg=mid+1;
}
else
{
end=mid-1;
}
}

if(c==0)
{
printf("search not succesfull");
}
return 0;
}
