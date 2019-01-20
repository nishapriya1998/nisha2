#include <stdio.h>
#include<conio.h>
void main()
{
    int a,t;
    scanf("%d",&t);
    while(t>0)
    {
    scanf("%d",&a);
    if(a>0)
    printf("Positive");
    else if(a<0)
    printf("Negative");
    else
    printf("Zero");
    }
    t--;
    getch();
}
