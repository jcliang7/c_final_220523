#include <stdio.h>
#include "myheader.h"

void menu1(Person g[], int n){
 for (int i=0; i<n; i++){
        printf("%d hired = %d", g[i].no, g[i].hired);
        if (g[i].hired) printf("%s", g[i].name);
        printf("\n");
    }
}
