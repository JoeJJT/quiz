/* FIXME: Implement! */

char smallest_character(char *str, char c )
{
    if(*str <= c) {
        return smallest_character(++str,c);
    } else
        return str[0];
}
