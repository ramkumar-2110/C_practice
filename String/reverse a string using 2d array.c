#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000],s2[500][500]={0};
    int a=0,j=0,i=0;
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';
    for( j=0;s1[a]!='\0';j++)
    {
        for (i=0;s1[a]!=' '&&s1[a]!='\0';i++)
        {
            s2[j][i]=s1[a]; 
            a++;   
        }
        if(s1[a]!='\0')
        a++;
    }
    for(a=j-1;a>=0;a--)
    {
        printf("%s ",s2[a]);
    }
}