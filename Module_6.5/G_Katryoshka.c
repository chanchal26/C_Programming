#include<stdio.h>

int main()

{
    long long int e,m,b,min;
    scanf("%lld %lld %lld",&e,&m,&b);
    if (e<=m && e<=b)
    {
        min=e;
    }else if (m<=e && m<=b)
    {
        min=m;
    }else{
        min=b;
    }

    e=e-min;
    m=m-min;
    b=b-min;

    long long int ans=min;

    if(e>0 && b>0){
        if (e/2<b)
        {
            ans+=e/2;
        }else{
            ans+=b;
        }
        
    }
    printf("%lld\n",ans);
    
    
    return 0;
}