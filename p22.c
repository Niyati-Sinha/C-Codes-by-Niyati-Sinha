#include<stdio.h>
int main()
{
    float pi;
    pi=22/7;
    printf("Value of 22/7 =%f\n\n",pi);

    pi=22.0/7;
    printf("Value of 22.0/7=%f\n\n",pi);

    pi=22.00/7;
    printf("Value of 22.00/7=%f\n\n",pi);

    pi=22.000/7;
    printf("Value of 22.000/7=%f\n\n",pi);

    pi=22.000000000/7;
    printf("Value of 22.000 000 000/7=%f\n\n",pi);

    pi=22.0/7.0;
    printf("Value of 22.0/7.0=%f\n\n",pi);

    pi=22.00/7.0;
    printf("Value of 22.00/7.0=%f\n\n",pi);

    pi=22.000/7.000000000;
    printf("Value of 22.000/7.000 000 000=%f\n\n",pi);

    pi=22/7.000;
    printf("Value of 22/7.000=%f\n\n",pi);

    pi=22/7.000000000;
    printf("Value of 22/7.000 000 000=%f\n\n",pi);

    pi=22.000000000/7.000000000;
    printf("Value of 22.000 000 000/7.000 000 000=%f\n\n",pi);

    return 0;
}