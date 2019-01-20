#include <stdio.h>
#include<conio.h>
void main()
{
    int a,t;
    scanf("%d",&t);
    while(t>0)
    {
    scanf("%d",&a);
    if(a%2==0)
    printf("valid");
    else
    printf("invalid");
    }
    t--;
    getch();
}
