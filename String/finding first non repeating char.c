#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000];
    int a,count=0;
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';
    a=strlen(s1);
    for(int i=0;i<a;i++)
    {
        count=0;
        for(int j=0;j<a;j++)
        {
            if(s1[i]==s1[j])
            {
                count++;
            }
        }
        if(count<=1)
        {
        printf("%c",s1[i]);
        return 0;
        }
    }
    if(count>1)
    {
        printf("Not found");
    }
}