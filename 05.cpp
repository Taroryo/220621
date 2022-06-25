#include <stdio.h>
#include <string.h>
#define STRLEN 51
int main(void)
{
    int i,j;
    char c,a[STRLEN];
    scanf("%c %s",&c,a);
    char *b = a;
    if( *(b+strlen(a)-1) == c ){
        for(i=0;i<strlen(a);i++)
        { *(b+i) = *(b+i+1); }
        *(b+strlen(a)) = '\0';
    }
    for(i=0;i<strlen(a)-1;i++)
        { if( *(b+i) == c )for(j=i;j<strlen(a)-1;j++) *(b+j+1) = *(b+j+2); }
    printf("%s",a);
    return 0;
}
