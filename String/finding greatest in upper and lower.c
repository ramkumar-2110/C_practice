#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[1000];//={"arRAzFif"};
    int a,m;
    
    fgets(s1,1000,stdin);
    s1[strcspn(s1,"\n")]='\0';

    a=strlen(s1);

    int max;
    max=s1[0];
    for(int i=0;i<a;i++)
    {
        if(97<=(int)s1[i]&&(int)s1[i]<=122)
        {
          if(max<s1[i])
          {
            for(int j=0;j<a;j++)
            {
                if((int)s1[j]==(int)s1[i]-32)
                {   
                        max=s1[i];
                        m=j; 
                }
            }
          }
        }
    }
    printf("%c",s1[m]);

    
}