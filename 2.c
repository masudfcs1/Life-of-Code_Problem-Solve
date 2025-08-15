#include<stdio.h>
int main()
{
    int a[5],*f,*l,i,v[5];
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    f=a;

    for(int i=0;i<4;i++)
        scanf("%d",&v[i]);
        l=v;
    printf("------\n");
    printf("Index   address   value\n");
    for(int i=0;i<4;i++){
        printf("\n",i);
        f++;
    }
}
/*
 1 2 3 4
 1 2 3 4
*/
