int CC(char C,char* W)
{
    int N = 0;
    for( W ; *W != '\0' ; W++ ){ if( *W == C ) N++; }
    return N;
}
