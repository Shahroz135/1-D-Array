#include"stdio.h"
#include"conio.h"
void main()
{
    int a[5],i;
    printf("Entet the elements of array:\n");
    for(i=1;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of Array are:\n");
    for(i=1;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
}