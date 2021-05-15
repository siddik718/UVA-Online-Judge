#include<iostream>
#include<cmath>

using namespace std;

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t,n[51];

    while(scanf("%d",&t) , t)
    {
        for(int i = 0;i<t;i++)
        {
            scanf("%d",&n[i]);
        }
        int s = t*(t-1)/2,cnt = 0;

        for(int i = 0;i<t;i++)
        {
            for(int j = i+1;j<t;j++)
            {
                if(gcd(n[i],n[j]) == 1)
                    cnt++;
            }
        }
        if(cnt == 0 )
            printf("No estimate for this data set.\n");
        else
            printf("%.6lf\n",sqrt((double)6*s/cnt));
    }
    return 0;
}

