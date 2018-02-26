#include <stdio.h>

int jiecheng(int n)
{
    int i;
    int result = 1;
    for(i=1;i<=n;i++)
    {
        result = result *i;
    }
    return result;

}

int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
    {
        int sum = 0;
        int l;
        int val = m;
        printf("%d,",m);
        while(m)
        {

             l = m%10;
             printf("%d!+",l);
             m = m/10;
             sum+=jiecheng(l);
        }
        printf("=%d\n",sum);
        if(sum==val) printf("YES\n");
          else printf("NO\n");
    }
    return 0;
}
