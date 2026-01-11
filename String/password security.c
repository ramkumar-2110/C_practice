#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[1000],s2[1000];
    int a;
    
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';

    a=strlen(s1);

    for(int i=0;i<a;i++)
    {
        if(s1[i]==' ')
        {
            continue;
        }
        s2[i]=s1[i];
    }

    a=strlen(s2);
    
    for(int i=0;i<a;i++)
    {
        if(isupper(s2[i]))
            s2[i]=tolower(s2[i]);

        else
            s2[i]=s2[i];
    }
    int j=a-1;

    for(int i=0;i<a;i++)
    {
        if(s2[i]!=s2[j])
        {
            printf("Password is non-vulnerable");
            return 0;
        }
        j--;
    }
    printf("Password is vulnerable");
    return 0;
}