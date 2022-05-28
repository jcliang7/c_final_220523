#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "myheader.h"
#define N 10

int main()
{
    Person group[N];
    init(group, N);
    void (*fp[5])() = {menu1, menu2, menu3, menu4, menu5};
    //listAll(group, N);
    int n;
    do{
        printf("Which menu to execute? (1-5, 0:exit):");
        scanf("%d", &n);
        if (n<=0 || n>5) break;
        (*fp[n-1])(group, N);
    }while(1);
    return 0;
}
