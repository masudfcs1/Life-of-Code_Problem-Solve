#include<stdio.h>
int main()
{
    int a[5]; int *p,maxx=-3234,minn=3234;
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    p=a;

    for(int i=0;i<4;i++){
        if(*p>maxx)
            maxx=*p;
        if(*p<minn)
            minn=*p;

        p++;
    }
    printf("\nMaximum Number: ",maxx);
    printf("\Minimum Number: ",minn);


    return 0;
}
