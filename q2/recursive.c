/* FIXME: Implement! */
#include<string.h>
char smallest_character(char *str, char c ,int index)
{
    if(index < strlen(str)) {
        if(str[index] <= c) {
            return smallest_character(str,c,++index);
        } else
            return str[index];
    }
    return str[0];
}
