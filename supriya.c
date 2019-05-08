#include <stdio.h>
int main()
{
    int i, j;
    char input, alphabet = 'A';

    
    for(i=1; i <= (5-'A'+1); ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
    return 0;
}
