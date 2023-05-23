#include<stdio.h>
int main()
{
    int n;
    char c;
    while(scanf("%c",&c)==1)
    {
      if(c=='\"')
      {
          n++;
          if(n%2==1)
          {
              printf("\`\`");
          }
          else if(n%2==0)
          {
            printf("\'\'");
          }
      }
      else
      {
          printf("%c",c);
      }
    }
}
