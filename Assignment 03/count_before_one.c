#include<stdio.h>
int count_before_one(int n,int a[])
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            break;
        }
        else{
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=count_before_one(n,a);
    printf("%d",count);
    return 0;
}