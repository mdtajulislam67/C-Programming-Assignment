#include<stdio.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int Even=0;
    int Odd=0;
    for (int i=1;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            Even++;
        }
        else{
            Odd++;
        }
    }
    printf("%d %d",Even,Odd);
    
}
int main()
{
    odd_even();
    return 0;
}