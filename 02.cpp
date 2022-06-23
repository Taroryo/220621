#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[51],b[51],c[101];
    scanf("%s",a);
    scanf("%s",b);
    int i,N = 1,A = strlen(a),B = strlen(b),C = A + B;
    for(i=0;i < A;i++){ c[i]=a[i]; }
    for(i=0;i < B;i++){ c[A+i]=b[i]; }
    for(i=0;i < C;i++)
    {
        if( c[i] != c[C-1-i] ){
            N = 0;
            break;
        }
    }
    c[C] = '\0';
    if ( N != 0 ) printf("ok:%s\n",c);
    else printf("not_ok:%s\n",c);
    return 0;
}
