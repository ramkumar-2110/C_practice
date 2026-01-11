#include <stdio.h>
#include <string.h>

int main()
{
    char s1[55],s2[55],s3[55];

    fgets(s1,55,stdin);
   s1[strcspn(s1,"\n")]='\0';
   
   fgets(s2,55,stdin);
   s2[strcspn(s2,"\n")]='\0';

   int a,b,c=0;
   a=strlen(s1);
   b=strlen(s2);

   for(int i=a-1;i>=0;i--)
   {
    if(c==1)
    {
      s3[i]=(s1[i]-48)+(s2[i]-48)+1;
      continue;
    }
    if((s1[i]-48)+(s2[i]-48)>9)
    {
    s3[i]=((s1[i]-48)+(s2[i]-48))%10;
    c=1;
    }
    else
    s3[i]=(s1[i]-48)+(s2[i]-48);
   }
   printf("%s",s3);
}