
char smallest_character(char str[],char c )
{
    int size = sizeof(str)/sizeof(str[0]);
    int i;
    for(i=0; i<size; i++) {
        if(str[i] > c) {
            return str[i];
        }
    }
    return str[0];
}


