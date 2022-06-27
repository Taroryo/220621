#include <stdio.h>
#include <string.h>
#define STRLEN 51
int main(void)
{
    int i,j;
    char c,a[STRLEN];
    scanf("%c %s",&c,a);
    if( a[strlen(a)-1] == c ){
        for(i=0;i<strlen(a);i++)
        { a[i] = a[i+1]; }
        a[strlen(a)] = '\0';
    }
    for(i=0;i<strlen(a)-1;i++)
        { if( a[i] == c )for(j=i;j<strlen(a)-1;j++) a[j+1] = a[j+2]; }
    printf("%s",a);
    return 0;
}
