#include <stdio.h>
int main(){
int a,b,c,d;
  
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    
    if ((a>=b) && (a>=c) && (a>=d))
    {
        printf("%d",a);
    }
    else if ((b>=a) && (b>=c) && (b>=d))
    {
        printf("%d",b);
    }
    else if ((c>=a) && (c>=b) && (c>=d))
    {
        printf("%c",c);
    }
    else if ((d>=a) && (d>=c) && (d>=b))
    {
        printf("%d",d);
    }
    
    return 0;
}