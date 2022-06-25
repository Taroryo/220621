#include <stdio.h>
const int MAX_CHAR = 50;
void NIS( int n, char str[])
{	
    char tmp[MAX_CHAR];
    int i = 0;
    while( str[i] != '\0' )
    {
        tmp[i] = str[i];
        i++;
    }
    int Count = i;
    i = 0;
    for(i=0;i<n;i++)
    {
        str[i] = tmp[(n-1) - i];
    }
    for( i=0; i<(Count - n); i++)
    {
        str[n + i] = tmp[(Count-1) - i];
    }
}
int main(void)
{
    char words[MAX_CHAR];
    int number;
    scanf("%d ",&number);
    scanf("%[^\n]%*c", words);
    NIS( number, words);
    printf("%s", words);
    return 0;
}
