#include <stdio.h>
int main()
{
    char x,y,z;
    x='A',y='B',z='C';
    printf("%c%c%c\n",x,y,z);
    char x2,y2,z2;
    x2='A',y2=x2+1,z2=y2+1;
    printf("%c%c%c\n",x2,y2,z2);
    return 0;
}