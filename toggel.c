#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int Data;
    int pos =0;
    printf("Enter the dayta\n");
    scanf("%d",&Data);
    printf("Initially Data = %d\n",Data);
    printf("Enter the position which you want toggle  ");
    scanf("%u",&pos);
    //toggle the nth bit.
    Data^=1<<pos;

    //Print the data
    printf("\n %d Bit is toggle Now Data will be = %d\n",pos,Data);
    return 0;
}

