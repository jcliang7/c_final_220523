#include <stdio.h>
#include "myheader.h"

void menu1(Person g[], int n)
{
    //Show list of position to be hired.//show numbers in a row;
    printf("Show List of postions to be hired:\n");
    for (int i=0; i<n; i++){
        if (g[i].hired == 0) printf("%d ", g[i].no);
    }
    printf("\n");
}

void menu2(Person g[], int n)
{
    //Show list of already hired positions. (sort by number);
    qsort(g, n, sizeof(Person), compareByNo);
    for (int i=0; i<n; i++){
        if (g[i].hired == 1) printf("%d %s\n", g[i].no,g[i].name);
    }
    printf("\n");
};

int compareByNo(const void *x, const void *y)
{
    Person *xx = (Person *)x;
    Person *yy = (Person *)y;
    return xx->no - yy->no;
}

void menu3(Person g[], int n)
{
    //Show list of already hired positions. (sort by number);
    qsort(g, n, sizeof(Person), compareByName);
    for (int i=0; i<n; i++){
        if (g[i].hired == 1) printf("%d %s\n", g[i].no,g[i].name);
    }
    printf("\n");
};

int compareByName(const void *x, const void *y)
{
    Person xx = *(Person *)x;
    Person yy = *(Person *)y;
    //全部轉小寫
    for (char *c=xx.name; *c; c++) *c = tolower(*c);
    for (char *c=yy.name; *c; c++) *c = tolower(*c);
    //用strcmp比大小
    return strcmp(xx.name, yy.name);
}

void menu4(Person g[], int n)
{
    //Hier a person
    printf("Hire a person(Input no. and name):\n");
    int input_n;
    scanf("%d", &input_n);
    scanf("%s", g[input_n-1].name);
    g[input_n-1].hired=1;
};

void menu5(Person g[], int n)
{
    //Fires a person
    printf("Fire a person(Input no.):\n");
    int input_n;
    scanf("%d", &input_n);
    strcpy(g[input_n-1].name, "");
    g[input_n-1].hired = 0;
}
