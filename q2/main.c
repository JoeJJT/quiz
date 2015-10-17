#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Input[] = {'c','f','j','p','v'};
    char Output;
    int i,index=0;
    char searchNumber;
    printf("Search Number:");
    scanf("%c",&searchNumber);
#if defined(REC)
    Output = smallest_character(Input,searchNumber,index);
#endif
#if defined(ITER)
    Output = smallest_character(Input,searchNumber);
#endif
    printf("Input:" );
    for(i=0; i<5; i++)
        printf("%c ",Input[i]);
    printf("\n");
    printf("Search Number: %c\n",searchNumber);
    printf("Output: %c\n",Output);
    return 0;
}
