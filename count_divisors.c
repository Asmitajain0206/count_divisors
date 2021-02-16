#include<stdio.h>
int main()
{int l,k,r,c=0;
printf("enter l k r \n");
scanf("%d %d %d",&l,&r,&k);
for(int i=l;i<=r;i++)
{if(i%k==0)
c++;
}
printf("%d",c);
}
