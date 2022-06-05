#include <stdio.h>
int main()
{
//__STDC_VERSION__ is a predefined version macro
#if __STDC_VERSION__ >= 201710l
    printf("Version- 18\n");
#elif __STDC_VERSION__ >= 201112l
    printf("Version- C11\n");
#elif __STDC_VERSION__ >= 199901l
    printf("Version- C99\n");
#else
    printf(" Version- C89/90\n", );
#endif

    return 0;
}