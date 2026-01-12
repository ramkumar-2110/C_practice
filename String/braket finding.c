#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000],s2[1000]={0};
    int a=0,j=0;
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';
    a=strlen(s1);
    for(int i=0;i<a;i++)
    {
        if(s1[i]=='('||s1[i]=='['||s1[i]=='{')
        {
            s2[j]=s1[i];
            j++;
        }
        if(s1[i]==')')
        {
            if(s2[j-1]=='(')
            {
                s2[j-1]=0;
                j--;
            }
        }
        if(s1[i]==']')
        {
            if(s2[j-1]=='[')
            {
                s2[j-1]=0;
                j--;
            }
        }
        if(s1[i]=='}')
        {
            if(s2[j-1]=='{')
            {
                s2[j-1]=0;
                j--;
            }
        }
    }
    if(strlen(s2)==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}