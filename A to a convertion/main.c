#include <stdio.h>
#include <stdlib.h>

int main()
{   char a;
    printf("The Ascii code of x is: \n",a);
    scanf("%c",&a);
    if (a>=65&&a<=90)
        printf("%c",a+32);
    else if (a>=97&&a<=122)
        printf("%c",a-32);
    else
        printf("invalid");
return 0;
}
