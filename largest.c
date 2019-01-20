#include <stdio.h>
#include<conio.h>
void main()
    {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("a is the largest");
    else if(b>c)
    printf("b is the largest");
    else
    printf("c is the largest");
    getch();
}
