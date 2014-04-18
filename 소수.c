#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=0,b=0,c=0,d=0;
    printf("¼ö : ");
    scanf("%d",&a);
    for(b=2;b<a;b++)
    {
     d=0;
     for(c=2;c<=b;c++)
     {
      if(b%c==0)
      d++;
     }
      if(d==1)
      printf("%d ",b);
    } 
  system("PAUSE");	
  return 0;
}
