
char smallest_character(char str[],char c)
{
    int i;
    int size = sizeof(str)/sizeof(str[0]);
    for(i=0; i<size; i++) {
        if(str[i] > c) {
            return str[i];
        }
    }
    return str[0];
}


