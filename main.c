#include <stdio.h>
#include "menu.h"

int main(){

    int key=0;
    char username[50];
    menu();

    switch (key)
    {
    case 1:
        printf("choose a good username:");
        scanf("%s",username);
        break;
    
    default:
        break;
    }

}