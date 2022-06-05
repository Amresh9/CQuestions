// Path of file

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    char *PathPointer;
    PathPointer = getenv("PATH");
    if (PathPointer != NULL)
    {
        printf("The Path is : %s\n", PathPointer);
    }

       return 0;
}
