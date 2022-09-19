#include"myFemto_shell.h"


int  main (void)
{
    while(1)
    {
        FemtoSell();
        if(strcmp(input_char,"exit") == 0 )
        {
            break;
        }
    }

    return 0;
}


void FemtoSell(void)
{
    printf("\nAna Gahez ya Basha > ");
    gets(input_char);
    (strcmp(input_char,"exit") == 0) ? printf("Good Bye :)\n") :
    printf("You said : %s",input_char);

}