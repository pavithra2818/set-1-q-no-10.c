#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter n:");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n /=10;
    }
    printf("%d",count);
    return 0;
}
