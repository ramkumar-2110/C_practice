#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000],s2[1000]={0};
    int a=0,j=0;
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';
    a=strlen(s1);
    int i=a-1;
    while(i>=0)
    {
        if(s1[i]==' ')
        {
            s1[i]=0;
            while(s1[i+1]!='\0')
            {
                s2[j]=s1[i+1];
                s1[i+1]=0;
                i++;
                j++;
            }
            s2[j]=' ';
            j++;
        }
        i--;
    }
    for(int i=0;s1[i]!='\0';i++)
    {
     s2[j]=s1[i];
     j++;
    }
    printf("%s",s2);
}