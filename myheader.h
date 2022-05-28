#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED

typedef struct person {
    int no;
    int hired;
    char name[80];
}Person;

void init(Person g[], int n);
void listAll(Person g[], int n);
void menu1(Person g[], int n);
void menu2(Person g[], int n);
void menu3(Person g[], int n);
void menu4(Person g[], int n);
void menu5(Person g[], int n);
int compareByNo(const void *x, const void *y);
int compareByName(const void *x, const void *y);
#endif // MYHEADER_H_INCLUDED
