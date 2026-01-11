#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000],s2[1000];
    int a;
    
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';
    
    fgets(s2,1000,stdin);
    s2[strcspn(s2,"\n")]='\0';
    
    if(strlen(s1)!=strlen(s2))
    {
    printf("False");
    return 0;
    }
    
    a=strlen(s1);
    
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(s1[i]==s2[j])
            {
            s2[j]='0';
            break;
            }
        }
    }
    
    for(int i=0;i<a;i++)
    {
        if(s2[i]!='0')
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
    
}