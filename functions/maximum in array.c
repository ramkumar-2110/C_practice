#include<stdio.h>

int max(int x);
int maxi(int b,int *p1);
int min(int c,int *p2);
int m1,m2,m3,l1,l2,maximum1,maximum2;

int main()
{
    int n;
    scanf("%d",&n);
    if(n<3)
    {
        printf("Invalid input");
        return 0;
    }
    max(n);
}
int max(int x)
{
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    maximum1=maxi(x,a);
    maximum2=min(x,a);
    printf("%d",maximum1>maximum2?maximum1:maximum2);
    return 0;
}
int maxi(int b, int *p1)
{
    if (p1[0] > p1[1]) {
        m1 = p1[0];
        m2 = p1[1];
    } else {
        m1 = p1[1];
        m2 = p1[0];
    }

    if (p1[2] > m1) {
        m3 = m2;
        m2 = m1;
        m1 = p1[2];
    }
    else if (p1[2] > m2) {
        m3 = m2;
        m2 = p1[2];
    }
    else {
        m3 = p1[2];
    }

    for(int i = 0; i < b; i++)
    {
        if(p1[i] > m1)
        {
            m3 = m2;
            m2 = m1;
            m1 = p1[i];
        }
        else if(p1[i] > m2)
        {
            m3 = m2;
            m2 = p1[i];
        }
        else if(p1[i] > m3)
        {
            m3 = p1[i];
        }
    }

    return m1 * m2 * m3;
}

int min(int c, int *p2)
{
    if (p2[0] < p2[1]) 
    {
        l1 = p2[0];
        l2 = p2[1];
    } 
    else 
    {
        l1 = p2[1];
        l2 = p2[0];
    }

    for(int i = 2; i < c; i++)
    {
        if(p2[i] < l1)
        {
            l2 = l1;
            l1 = p2[i];
        }
        else if(p2[i] < l2)
        {
            l2 = p2[i];
        }
    }

    return l1 * l2 *m1;
}