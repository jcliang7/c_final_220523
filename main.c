#include <stdio.h>
#include "myheader.h"
#define N 10

int main()
{
    Person group[N];
    init(group, N);
    void (*fp[1])() = {menu1};
    //listAll(group, N);
    int n;
    do{
        printf("Which menu to execute? (1-5, 0:exit):");
        scanf("%d", &n);
        if (n<=0 || n>5) break;
        (*fp[n-1])(group, N);
        if (n==1) menu1(group,N);
    }while(1);
    return 0;
}
