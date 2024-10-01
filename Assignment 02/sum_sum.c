#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int v;
    int sum_pos=0;
    int sum_neg=0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&v);
        
        if(v>0){
            sum_pos += v;
        }
        else if(v<0)
            {
                sum_neg += v;
            }
    }

    printf("%d %d", sum_pos, sum_neg);

    return 0;
}