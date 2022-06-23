void CW(char *W,char *S,int &N)
{
    N = 0;
    int i=0,j=0;
    while(1){
        if ( i>strlen(S) ){ break;}
        for( j=0; j<strlen(W); j++)
        {
            if ( *(W+j) != *(S+i+j) ){ break; }
            else {
                if ( j + 1 == strlen(W) ){ N++; break; }
                else { continue; }
            }
        }
        i++;
    }
}
