#include <stdio.h>
#include "myheader.h"

//Show all group data
void listAll(Person g[], int n){
    for (int i=0; i<n; i++){
        printf("%d hired = %d", g[i].no, g[i].hired);
        if (g[i].hired) printf("%s", g[i].name);
        printf("\n");
    }
}
