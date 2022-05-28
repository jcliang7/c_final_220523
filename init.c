#include <string.h>
#include "myheader.h"

void init(Person g[], int n){
    for (int i=0; i<n; i++){
        g[i].no = i+1;
        g[i].hired = 0;
        strcpy(g[i].name, "");
    }
}
