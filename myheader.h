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
#endif // MYHEADER_H_INCLUDED
