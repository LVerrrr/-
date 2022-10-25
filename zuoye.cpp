#include <stdio.h>
int main()
{
    int n,k,m;
	int t = 0;
	int count;
    int r[101];
    scanf("%d%d%d",&n,&k,&m);
    for (int i = 1; i <= n; i++)
    {
        r[i] = 1;
    }
    count = n;
    while (count > 2)
    {
        if(r[k] == 1)
        {
            t = t % m + 1;
            if(t == m)
            {
                r[k] = 0;
                count--;
            }
        }
        k = k % n +1;
    }
    for (int i = 1; i <= n; i++)
    {
        if(r[i] == 1)
        printf("%d ",i);
    }
    return 0;
}

