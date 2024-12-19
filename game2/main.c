#include <stdio.h>
#include <stdlib.h>
int main(){

    char name[25],place[25];

    printf("What are you called?\n");
    scanf("%s", name);

    printf("Where dost thou hail from?\n");
    scanf("%s", place);

    printf("\n You are %s, a warrior in the kingdom of %s!\n", name, place);

    return 0;
}
