#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",&a);
    strcpy(b,a);
    int i=0,j=strlen(b)-1;
    while (i<j)
    {
        int tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
        i++;
        j--;
    }
    printf("%s",b);

    if(strcpm(a,b)==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}