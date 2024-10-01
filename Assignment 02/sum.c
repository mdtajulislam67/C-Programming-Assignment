#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int sum_pos=0;
    int sum_neg=0;

    for(int i=0; i<n; i++)
    {
        if(a>0){
            sum_pos+=sum_pos;
        }
        else if(a<0)
            {
                sum_neg+=sum_neg;
            }
    }
    printf("%d %d", sum_pos, sum_neg);

    return 0;
}