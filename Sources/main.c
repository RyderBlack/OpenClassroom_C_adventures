#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

// Prototype:
char* strcpy(char* copyOfChain, const char* chainToCopy);

int main(int argc, char *argv[])
{
    // char str[100];
    char chain[] = "hello world", copied[100] = {0};;
    int len_chain = 0;
    len_chain = strlen(chain);

    printf("The chain %s has the following length %d\n", chain, len_chain);

    strcpy(copied, chain);
    printf("Chain : %s\n", chain);
    printf("Copied chain : %s\n", copied);


    if(strcmp(chain, copied) == 0) {
       printf("The chain is equal to the copied chain\n");
    } else {
        printf("The chain is not equal to the copied chain\n");
    }


    char chain_age[100];
    int age = 21;
    sprintf(chain_age, "You are %d years old", age);
    printf("%s\n", chain_age);

    int sizing = SIZE;
    printf("The size is %d\n", sizing);
    printf("This file has been compiled %s at %s\n", __DATE__, __TIME__);

    return 0;
}








